#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Moon_JsonParser_Slot___Boxed.h>
#include <Modloader/app/structs/JsonParser_Slot.h>
#include <Modloader/app/structs/Nullable_1_Moon_JsonParser_Slot_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Moon_JsonParser_Slot_ {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr, app::JsonParser_Slot value))
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F5030, app::JsonParser_Slot, get_Value, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F5120, bool, Equals_1, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F48A0, bool, Equals_2, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr, app::Nullable_1_Moon_JsonParser_Slot_ other))
    IL2CPP_REGISTER_METHOD(0x001F4900, int32_t, GetHashCode, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::JsonParser_Slot, GetValueOrDefault_1, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::JsonParser_Slot, GetValueOrDefault_2, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr, app::JsonParser_Slot default_value))
    IL2CPP_REGISTER_METHOD(0x001F5170, app::String*, ToString, (app::Nullable_1_Moon_JsonParser_Slot___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254E8A0, app::Object*, Box, (app::Nullable_1_Moon_JsonParser_Slot_ o))
    IL2CPP_REGISTER_METHOD(0x0254E930, app::Nullable_1_Moon_JsonParser_Slot_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_Moon_JsonParser_Slot_
