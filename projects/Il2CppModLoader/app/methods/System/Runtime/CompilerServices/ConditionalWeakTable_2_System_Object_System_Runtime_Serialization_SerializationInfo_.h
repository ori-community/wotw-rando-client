#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ {
    IL2CPP_REGISTER_METHOD(0x02770450, void, ctor, (app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047323F8, ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02770CE0, void, Add, (app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ * this_ptr, app::Object * key, app::SerializationInfo * value))
    IL2CPP_REGISTER_METHODINFO(0x0477C3F0, ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02771360, bool, TryGetValue, (app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ * this_ptr, app::Object * key, app::SerializationInfo * * value))
    IL2CPP_REGISTER_METHODINFO(0x047367D8, ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02771050, bool, Remove, (app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0477DAC0, ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo__Remove__MethodInfo)
}
