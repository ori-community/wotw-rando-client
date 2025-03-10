#include <Core/api/game/game.h>
#include <Core/input/mouse.h>

#include <Modloader/app/methods/UnityEngine/Camera.h>
#include <Modloader/app/types/Input_1.h>
#include <Modloader/app/types/UI_Cameras.h>

namespace core::input::mouse {
    using namespace app::classes;

    app::Vector2 world_position_cache;
    auto world_position_cache_dirty = true;

    [[maybe_unused]] auto on_before_unity_update = api::game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::Before, [](auto, auto) {
        world_position_cache_dirty = true;
    });

    app::Vector2 get_world_position() {
        if (!world_position_cache_dirty) {
            return world_position_cache;
        }

        const auto mouse_position = types::Input_1::get_class()->static_fields->CursorPosition;

        const auto gameplay_camera = types::UI_Cameras::get_class()->static_fields->Current;

        if (gameplay_camera == nullptr) {
            return {0, 0};
        }

        const auto camera = gameplay_camera->fields.Controller->fields.Camera;
        const auto world_position = UnityEngine::Camera::ViewportToWorldPoint_2(camera, app::Vector3{ mouse_position.x, mouse_position.y, -il2cpp::unity::get_position(camera).z });

        world_position_cache = { world_position.x, world_position.y };

        return world_position_cache;
    }
}
