#include "Hazel.h"


class ExampleLayer : public Hazel::Layer
{
	ExampleLayer()
		:Layer("Layer-Title")
	{ }

	void OnUpdate() override
	{
		HZ_INFO("ExampleLayer::Update");
	}

	void OnEvent(Hazel::Event& event) override
	{
		HZ_TRACE("{0}", event);
	}

};

class Sandbox : public Hazel::Application
{
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}