#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MudkisserPatrolBehaviour.h>

namespace app::classes::MudkisserPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, KeepMoving, app::MudkisserPatrolBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00877820, void, ctor, app::MudkisserPatrolBehaviour* this_ptr)
} // namespace app::classes::MudkisserPatrolBehaviour
