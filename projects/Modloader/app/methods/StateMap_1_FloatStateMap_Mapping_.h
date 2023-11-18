#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StateMap_1_FloatStateMap_Mapping_.h>
#include <Modloader/app/structs/IUberState.h>

namespace app::classes::StateMap_1_FloatStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x019FAA80, void, ctor, (app::StateMap_1_FloatStateMap_Mapping_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D19B00, int32_t, Resolve, (app::StateMap_1_FloatStateMap_Mapping_ * this_ptr, app::IUberState* state))
} // namespace app::classes::StateMap_1_FloatStateMap_Mapping_
