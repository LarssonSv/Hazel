#pragma once

#include "Hazel/Core.h"
#include "Layers/Layer.h"

#include "vector"


namespace Hazel {

	class HAZEL_API LayerStack 
	{
	public:
		LayerStack();
		~LayerStack();

		
		void PushOverlay(Layer* overlay);
		void PopOverlay(Layer* overlay);
		void PushLayer(Layer* layer);
		void PopLayer(Layer* layer);

		std::vector<Layer*>::iterator begin() { return m_Layers.begin();}
		std::vector<Layer*>::iterator end() { return m_Layers.end(); }
	private:
		std::vector<Layer*> m_Layers;
		std::vector<Layer*>::iterator m_LayerInsert;


	};

}