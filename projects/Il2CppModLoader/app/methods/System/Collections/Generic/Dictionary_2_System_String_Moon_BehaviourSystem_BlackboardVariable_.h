#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHODINFO(0x04739FD8, Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHODINFO(0x04753D40, Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787FF0, Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_BehaviourSystem_BlackboardVariable_ *, get_Values, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471AE80, Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable__get_Values__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::String * key, app::BlackboardVariable * * value))
    IL2CPP_REGISTER_METHODINFO(0x04748840, Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_Moon_BehaviourSystem_BlackboardVariable_, GetEnumerator, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047286A8, Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047465C8, Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::String * key, app::BlackboardVariable * value))
    IL2CPP_REGISTER_METHODINFO(0x04780D60, Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable__Add__MethodInfo)
}
