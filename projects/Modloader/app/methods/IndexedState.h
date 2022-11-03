#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IndexedState {
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Index, (app::IndexedState__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Index, (app::IndexedState__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00107C10, app::String*, get_Name, (app::IndexedState__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_Name, (app::IndexedState__Boxed * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00113140, bool, get_NotMappable, (app::IndexedState__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001C0320, void, set_NotMappable, (app::IndexedState__Boxed * this_ptr, bool value))
} // namespace app::classes::IndexedState
