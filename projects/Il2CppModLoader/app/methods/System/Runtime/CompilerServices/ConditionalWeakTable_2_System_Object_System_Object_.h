#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::ConditionalWeakTable_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02770450, void, ctor, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027705C0, void, Finalize, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027705F0, void, RehashWithoutResize, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02770900, void, RecomputeSize, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02770970, void, Rehash, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02770CE0, void, Add, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr, app::Object * key, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04713888, ConditionalWeakTable_2_System_Object_System_Object__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02771050, bool, Remove, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x047959F8, ConditionalWeakTable_2_System_Object_System_Object__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02771360, bool, TryGetValue, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr, app::Object * key, app::Object * * value))
    IL2CPP_REGISTER_METHODINFO(0x04748CA8, ConditionalWeakTable_2_System_Object_System_Object__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02771670, app::Object *, GetValue, (app::ConditionalWeakTable_2_System_Object_System_Object_ * this_ptr, app::Object * key, app::ConditionalWeakTable_2_TKey_TValue_CreateValueCallback_System_Object_System_Object_ * create_value_callback))
    IL2CPP_REGISTER_METHODINFO(0x0470A208, ConditionalWeakTable_2_System_Object_System_Object__GetValue__MethodInfo)
}
