#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatStateMap_Mapping__Boxed.h>
#include <Modloader/app/structs/IUberState.h>

namespace app::classes::FloatStateMap_Mapping {
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Index, app::FloatStateMap_Mapping__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Index, app::FloatStateMap_Mapping__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x001C01D0, bool, Matches, app::FloatStateMap_Mapping__Boxed* this_ptr, app::IUberState* state)
} // namespace app::classes::FloatStateMap_Mapping
