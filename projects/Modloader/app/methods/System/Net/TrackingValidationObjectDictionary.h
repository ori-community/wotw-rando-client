#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TrackingValidationObjectDictionary.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::TrackingValidationObjectDictionary {
    IL2CPP_REGISTER_METHOD(0x020AA220, void, ctor, (app::TrackingValidationObjectDictionary * this_ptr, app::IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue_* validators))
    IL2CPP_REGISTER_METHOD(0x020AA250, void, PersistValue, (app::TrackingValidationObjectDictionary * this_ptr, app::String* key, app::String* value, bool add_value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsChanged, (app::TrackingValidationObjectDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_IsChanged, (app::TrackingValidationObjectDictionary * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x020AA5C0, app::Object*, InternalGet, (app::TrackingValidationObjectDictionary * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x020AA6A0, void, InternalSet, (app::TrackingValidationObjectDictionary * this_ptr, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x020AA130, app::String*, get_Item, (app::TrackingValidationObjectDictionary * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x020AA890, void, set_Item, (app::TrackingValidationObjectDictionary * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x020AA8B0, void, Add, (app::TrackingValidationObjectDictionary * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x020AA8D0, void, Clear, (app::TrackingValidationObjectDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020AA980, void, Remove, (app::TrackingValidationObjectDictionary * this_ptr, app::String* key))
} // namespace app::classes::System::Net::TrackingValidationObjectDictionary
