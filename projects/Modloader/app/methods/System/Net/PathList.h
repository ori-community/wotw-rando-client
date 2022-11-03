#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::PathList {
    IL2CPP_REGISTER_METHOD(0x01BCB300, void, ctor, (app::PathList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCB4B0, int32_t, get_Count, (app::PathList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCB4E0, int32_t, GetCookiesCount, (app::PathList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCB830, app::ICollection*, get_Values, (app::PathList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCB860, app::Object*, get_Item, (app::PathList * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01BCB890, void, set_Item, (app::PathList * this_ptr, app::String* s, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01717520, app::IEnumerator*, GetEnumerator, (app::PathList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017173F0, app::Object*, get_SyncRoot, (app::PathList * this_ptr))
} // namespace app::classes::System::Net::PathList
