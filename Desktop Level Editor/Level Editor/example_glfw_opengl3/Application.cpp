#include "Application.h"
#include "imgui.h"

namespace LevelEditor
{
    void RenderUI()
    {
        ImGui::Begin("Settings");
        ImGui::Button("Hello");
        static float value = 0.0f;
        ImGui::DragFloat("Value", &value);
        ImGUi::End();
    }
}
