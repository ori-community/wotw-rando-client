#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchMakingKeyValuePair_t__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::MatchMakingKeyValuePair_t {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, app::MatchMakingKeyValuePair_t__Boxed* this_ptr, app::String* str_key, app::String* str_value)
}
