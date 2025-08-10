#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TrackingStringDictionary.h>

namespace app::classes::System::Net::TrackingStringDictionary {
    IL2CPP_REGISTER_METHOD(0x020A9E30, void, ctor_1, app::TrackingStringDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020A9E50, void, ctor_2, app::TrackingStringDictionary* this_ptr, bool is_read_only)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsChanged, app::TrackingStringDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsChanged, app::TrackingStringDictionary* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x020A9E80, void, Add, app::TrackingStringDictionary* this_ptr, app::String* key, app::String* value)
    IL2CPP_REGISTER_METHOD(0x020A9F60, void, Clear, app::TrackingStringDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AA050, void, Remove, app::TrackingStringDictionary* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x020AA130, app::String*, get_Item, app::TrackingStringDictionary* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x020AA140, void, set_Item, app::TrackingStringDictionary* this_ptr, app::String* key, app::String* value)
} // namespace app::classes::System::Net::TrackingStringDictionary
