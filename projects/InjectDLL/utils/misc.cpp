#include <utils/misc.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <randomizer/render/shaders.h>

namespace utils {
    constexpr float COLOR_DIVIDER = 3.0f;

    void set_color(app::GameObject* go, app::Color& color, bool first) {
        auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(go, "UnityEngine", "Renderer");
        for (auto renderer : renderers) {
            auto prev_color = randomizer::shaders::UberShaderAPI::GetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor);
            app::Color actual_color = color;
            if (prev_color.a > 0.5f) {
                if (prev_color.a < 0.9f) {
                    actual_color.r /= COLOR_DIVIDER;
                    actual_color.g /= COLOR_DIVIDER;
                    actual_color.b /= COLOR_DIVIDER;
                } else if (first) {
                    actual_color.r = 1.0f;
                    actual_color.g = 1.0f;
                    actual_color.b = 1.0f;
                    first = false;
                }

                actual_color.a = prev_color.a;
                randomizer::shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &actual_color);
            }
        }
    }
} // namespace utils