#include <utils/misc.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/app/methods/UberShaderAPI.h>
#include <Il2CppModLoader/app/methods/MoonGuid.h>

using namespace app::methods;

namespace utils {
    constexpr float COLOR_DIVIDER = 3.0f;

    void set_color(app::GameObject* go, app::Color& color, bool first) {
        auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(go, "UnityEngine", "Renderer");
        for (auto renderer : renderers) {
            auto prev_color = UberShaderAPI::GetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor);
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
                UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, actual_color);
            }
        }
    }

    app::MoonGuid* moon_guid(int a, int b, int c, int d) {
        auto guid = il2cpp::create_object<app::MoonGuid>("", "MoonGuid");
        MoonGuid::ctor_2(guid, a, b, c, d);
        return guid;
    }
} // namespace utils