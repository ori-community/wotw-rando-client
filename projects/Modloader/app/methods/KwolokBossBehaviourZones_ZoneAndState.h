#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossBehaviourZones_ZoneAndState.h>
#include <Modloader/app/structs/CageStructureTool.h>

namespace app::classes::KwolokBossBehaviourZones_ZoneAndState {
    IL2CPP_REGISTER_METHOD(0x01248670, void, ctor, (app::KwolokBossBehaviourZones_ZoneAndState * this_ptr, app::CageStructureTool* cage))
}
