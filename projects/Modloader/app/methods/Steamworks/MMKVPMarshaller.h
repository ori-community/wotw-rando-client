#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::MMKVPMarshaller {
    IL2CPP_REGISTER_METHOD(0x01600790, void, ctor, (app::MMKVPMarshaller * this_ptr, app::MatchMakingKeyValuePair_t__Array* filters))
    IL2CPP_REGISTER_METHOD(0x01600B50, void, Finalize, (app::MMKVPMarshaller * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01600C80, void*, op_Implicit, (app::MMKVPMarshaller * that))
} // namespace app::classes::Steamworks::MMKVPMarshaller
