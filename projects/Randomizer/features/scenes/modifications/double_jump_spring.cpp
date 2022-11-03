#include <Modloader/common.h>
#include <Core/utils/event_bus.h>
#include <Core/api/scenes/create_objects.h>
#include <Randomizer/constants.h>

#include <optional>

namespace {
    void initialize() {
        scenes::add_item("double_jump_tree_spring", { -566.93634f, -4545.384766f, 0.f }, app::Vector3{ 0, PI, 0 }, std::optional<app::Vector3>(), "swampSpringIntroductionB", { "interactives", "springSunkenGlades" });
    }

    CALL_ON_INIT(initialize);
} // namespace