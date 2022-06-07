#include <utils/position_converter.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Camera.h>
#include <Il2CppModLoader/app/methods/GameplayCamera.h>

using namespace app::methods;
using namespace app::methods::UnityEngine;

namespace {
    enum ConvertPositionType {
        UI_TO_WORLD,
        WORLD_TO_UI,
    };

    app::Vector3 convert_position(app::Vector3 position, ConvertPositionType type) {
        auto cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
        if (!il2cpp::unity::is_valid(cameras->static_fields->Current) || !il2cpp::unity::is_valid(cameras->static_fields->System->fields.GUICamera))
            return position;

        auto world_camera = GameplayCamera::get_Camera(cameras->static_fields->Current);
        auto ui_camera = cameras->static_fields->System->fields.GUICamera->fields.Camera;
        if (!il2cpp::unity::is_valid(world_camera) || !il2cpp::unity::is_valid(ui_camera))
            return position;

        switch (type) {
            case UI_TO_WORLD:
                position = Camera::WorldToScreenPoint_2(ui_camera, position);
                position = Camera::ScreenToWorldPoint_2(world_camera, position);
                break;
            case WORLD_TO_UI:
                position = Camera::WorldToScreenPoint_2(world_camera, position);
                position = Camera::ScreenToWorldPoint_2(ui_camera, position);
                break;
        }

        return position;
    }
} // namespace

INJECT_C_DLLEXPORT app::Vector3 world_to_ui_position(app::Vector3 const& position) {
    return convert_position(position, WORLD_TO_UI);
}

INJECT_C_DLLEXPORT app::Vector3 ui_to_world_position(app::Vector3 const& position) {
    return convert_position(position, UI_TO_WORLD);
}

INJECT_C_DLLEXPORT app::Vector2 world_to_ui_position_2d(app::Vector2 const& position) {
    app::Vector3 input{ position.x, position.y, 0.f };
    input = convert_position(input, WORLD_TO_UI);
    return { input.x, input.y };
}

INJECT_C_DLLEXPORT app::Vector2 ui_to_world_position_2d(app::Vector2 const& position) {
    app::Vector3 input{ position.x, position.y, 0.f };
    input = convert_position(input, UI_TO_WORLD);
    return { input.x, input.y };
}
