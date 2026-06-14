#include <Common/event_bus.h>
#include <Core/api/scenes/create_objects.h>
#include <Modloader/modloader.h>
#include <Randomizer/constants.h>

#include <optional>

namespace {
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        core::api::scenes::add_item(
            "double_jump_tree_spring",
            { -566.93634f, -4545.384766f, 0.f },
            app::Vector3{ 0, PI, 0 },
            std::optional<app::Vector3>(),
            "swampSpringIntroductionB",
            { "interactives", "springSunkenGlades" }
        );
    });
} // namespace