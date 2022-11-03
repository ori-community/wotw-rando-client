#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Unity::IO::Compression::Match {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::MatchState__Enum, get_State, (app::Match_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_State, (app::Match_1 * this_ptr, app::MatchState__Enum value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Position, (app::Match_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Position, (app::Match_1 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Length, (app::Match_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Length, (app::Match_1 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0052B580, uint8_t, get_Symbol, (app::Match_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_Symbol, (app::Match_1 * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Match_1 * this_ptr))
} // namespace app::classes::Unity::IO::Compression::Match
