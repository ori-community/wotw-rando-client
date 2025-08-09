#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberStateCollectionGroup.h>

namespace app::classes::Moon::UberStateCollectionGroup {
    IL2CPP_REGISTER_METHOD(0x01B691F0, app::IUberState*, GetState, app::UberStateCollectionGroup* this_ptr, app::UberID* id)
    IL2CPP_REGISTER_METHOD(0x01B692F0, void, Add, app::UberStateCollectionGroup* this_ptr, app::UberID* id, app::IUberState* uber_state_descriptor)
    IL2CPP_REGISTER_METHOD(0x01B69520, void, ctor, app::UberStateCollectionGroup* this_ptr)
} // namespace app::classes::Moon::UberStateCollectionGroup
