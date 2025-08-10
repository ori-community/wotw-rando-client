#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllContainer_1_Objective_.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Objective.h>

namespace app::classes::Game::Objectives {
    IL2CPP_REGISTER_METHOD(0x01525FA0, bool, ObjectiveExists, app::Objective* objective)
    IL2CPP_REGISTER_METHOD(0x01526120, app::AllContainer_1_Objective_*, get_All, )
    IL2CPP_REGISTER_METHOD(0x015261D0, void, Serialize, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x015265D0, void, AddObjective, app::Objective* objective)
    IL2CPP_REGISTER_METHOD(0x01526710, void, CompleteObjective, app::Objective* objective)
} // namespace app::classes::Game::Objectives
