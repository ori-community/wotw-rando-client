#include <interception_macros.h>
#include <dll_main.h>

#include "pickups.h"

//noop only - reward triggers on uberstate change.
INTERCEPT(11712560, void, QuestsController__ApplyReward, (QuestsController_o * this_ptr, QuestReward_o * reward)) {}
INTERCEPT(12110000, void, RaceHandler__ApplyReward, (RaceHandler_o* this_ptr)) {}

INTERCEPT(11697904, void, QuestNodeWisps__ApplyReward, (QuestNodeWisps_o* this_ptr)) {
    collecting_pickup = true;
    QuestNodeWisps__ApplyReward(this_ptr);
    collecting_pickup = false;      
}
