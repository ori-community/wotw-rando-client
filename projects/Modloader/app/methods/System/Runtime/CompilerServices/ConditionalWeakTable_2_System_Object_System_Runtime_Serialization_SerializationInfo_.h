#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>

namespace app::classes::System::Runtime::CompilerServices::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ {
    IL2CPP_REGISTER_METHOD(0x02770450, void, ctor, (app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02770CE0, void, Add, (app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ * this_ptr, app::Object* key, app::SerializationInfo* value))
    IL2CPP_REGISTER_METHOD(0x02771360, bool, TryGetValue, (app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ * this_ptr, app::Object* key, app::SerializationInfo** value))
    IL2CPP_REGISTER_METHOD(0x02771050, bool, Remove, (app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Runtime::CompilerServices::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_
