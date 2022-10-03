#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonTelemetryCharacterBaseEvent {
    IL2CPP_REGISTER_METHOD(0x01288790, app::Vector2, get_Position, (app::MoonTelemetryCharacterBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01466B20, app::Vector2, get_LastScreenPosition, (app::MoonTelemetryCharacterBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01466B40, void, set_LastScreenPosition, (app::MoonTelemetryCharacterBaseEvent * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01466B70, void, InvalidateAbilitiesCache, ())
    IL2CPP_REGISTER_METHOD(0x01466C10, void, UpdateAbilitiesCache, ())
    IL2CPP_REGISTER_METHOD(0x01467190, void, InvalidateShardCache, ())
    IL2CPP_REGISTER_METHOD(0x01467230, void, UpdateShardCache, ())
    IL2CPP_REGISTER_METHOD(0x014677D0, void, SetValue, (app::MoonTelemetryCharacterBaseEvent * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x014679F0, app::Dictionary_2_System_String_System_Reflection_FieldInfo_*, GetFieldsCollection, (app::MoonTelemetryCharacterBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01467DF0, void, SetValue_Internal, (app::MoonTelemetryCharacterBaseEvent * this_ptr, app::FieldInfo_1* info, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01467F40, void, SynchronousInitialize, (app::MoonTelemetryCharacterBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01468A10, void, AsynchronousInitialize, (app::MoonTelemetryCharacterBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01468CE0, void, SerializeToObject, (app::MoonTelemetryCharacterBaseEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x01469C80, void, ctor, (app::MoonTelemetryCharacterBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::MoonTelemetryCharacterBaseEvent
