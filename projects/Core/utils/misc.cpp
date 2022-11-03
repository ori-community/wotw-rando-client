#include <Core/utils/misc.h>

#include <Modloader/app/methods/MoonGuid.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UberShaderColor.h>
#include <Modloader/app/types/MoonGuid.h>
#include <Modloader/app/types/UberShaderColor.h>
#include <Modloader/il2cpp_helpers.h>

using namespace app::classes;

namespace utils {
    constexpr float COLOR_DIVIDER = 3.0f;

    void set_color(app::GameObject* go, app::Color& color, app::UberShaderProperty_Color__Enum shader_property, bool skip_first) {
        auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(go, "UnityEngine", "Renderer");
        for (auto renderer : renderers) {
            auto prev_color = UberShaderAPI::GetColor_1(renderer, shader_property);
            app::Color actual_color = color;
            if (prev_color.a > 0.5f) {
                if (prev_color.a < 0.9f) {
                    actual_color.r /= COLOR_DIVIDER;
                    actual_color.g /= COLOR_DIVIDER;
                    actual_color.b /= COLOR_DIVIDER;
                } else if (skip_first) {
                    actual_color.r = 1.0f;
                    actual_color.g = 1.0f;
                    actual_color.b = 1.0f;
                    skip_first = false;
                }

                actual_color.a = prev_color.a;
                UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, actual_color);
            }
        }
    }

    app::MoonGuid* moon_guid(int a, int b, int c, int d) {
        auto guid = types::MoonGuid::create();
        MoonGuid::ctor_2(guid, a, b, c, d);
        return guid;
    }

    app::UberShaderColor* uber_shader_color(app::Color& color) {
        auto shader_color = types::UberShaderColor::create();
        UberShaderColor::ctor_2(shader_color, color);
        return shader_color;
    }

    void clamp_vector(app::Vector2& vector, float value) {
        float max = std::max(std::abs(vector.x), std::abs(vector.y));

        if (max > value) {
            auto factor = value / max;
            vector.x *= factor;
            vector.y *= factor;
        }
    }

    void clamp_vector(app::Vector3& vector, float value) {
        float max = std::max(std::abs(vector.x), std::max(std::abs(vector.y), std::abs(vector.z)));

        if (max > value) {
            auto factor = value / max;
            vector.x *= factor;
            vector.y *= factor;
            vector.z *= factor;
        }
    }
} // namespace utils