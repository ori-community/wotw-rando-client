#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/PlayerStateMap_Mapping__Boxed.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerStateMap_Mapping {
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Index, app::PlayerStateMap_Mapping__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Index, app::PlayerStateMap_Mapping__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_MatchType, app::PlayerStateMap_Mapping__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00121070, bool, Matches, app::PlayerStateMap_Mapping__Boxed* this_ptr, app::IUberState* state)
} // namespace app::classes::Moon::uberSerializationWisp::PlayerStateMap_Mapping
