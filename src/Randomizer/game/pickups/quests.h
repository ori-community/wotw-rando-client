#include <Modloader/app/structs/QuestsController.h>

namespace randomizer::game::pickups::quests {
    app::QuestsController* controller();
    void set_allow_changing_active_quest(bool allow);
    void clear_queued_quest_messages_on_next_update();
} // namespace game::pickups::quests
