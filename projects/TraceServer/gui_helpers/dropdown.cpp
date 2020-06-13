#include <gui_helpers/dropdown.h>

#include <ext.h>
#include <gui/imgui.h>

#include <string>

bool begin_dropdown(char const* id, char const* label, ImVec2 const& b_size)
{
    auto w_pos = ImGui::GetWindowPos();
    ImGuiStyle const& style = ImGui::GetStyle();

    float x = ImGui::GetCursorPosX();
    float y = ImGui::GetCursorPosY();

    std::string bid = "button_";
    ImGui::PushID((bid + id).c_str());
    bool pressed = ImGui::Button(label, b_size);
    ImGui::PopID();

    // Arrow
    ImVec2 center(w_pos.x + x + 10, w_pos.y + y + b_size.y / 2);
    float r = 8.f;
    center.y -= r * 0.25f;
    ImVec2 a = center + ImVec2(0, 1) * r;
    ImVec2 b = center + ImVec2(-0.866f, -0.5f) * r;
    ImVec2 c = center + ImVec2(0.866f, -0.5f) * r;

    ImGui::GetWindowDrawList()->AddTriangleFilled(a, b, c, ImGui::GetColorU32(ImGuiCol_Text));

    // Popup

    ImVec2 popupPos;

    popupPos.x = w_pos.x + x;
    popupPos.y = w_pos.y + y + b_size.y;

    ImGui::SetNextWindowPos(popupPos);

    if (pressed)
        ImGui::OpenPopup(id);

    return ImGui::BeginPopup(id);
}

void end_dropdown()
{
    ImGui::EndPopup();
}