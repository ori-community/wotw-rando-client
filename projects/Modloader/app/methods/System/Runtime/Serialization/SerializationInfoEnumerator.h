#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationInfoEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SerializationEntry.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Runtime::Serialization::SerializationInfoEnumerator {
    IL2CPP_REGISTER_METHOD(0x01EE10F0, void, ctor, (app::SerializationInfoEnumerator * this_ptr, app::String__Array* members, app::Object__Array* info, app::Type__Array* types, int32_t num_items))
    IL2CPP_REGISTER_METHOD(0x01EE1120, bool, MoveNext, (app::SerializationInfoEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE1140, app::Object*, IEnumerator_get_Current, (app::SerializationInfoEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE12E0, app::SerializationEntry, get_Current, (app::SerializationInfoEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE1450, void, Reset, (app::SerializationInfoEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE1460, app::String*, get_Name, (app::SerializationInfoEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE1550, app::Object*, get_Value, (app::SerializationInfoEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE1640, app::Type*, get_ObjectType, (app::SerializationInfoEnumerator * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::SerializationInfoEnumerator
