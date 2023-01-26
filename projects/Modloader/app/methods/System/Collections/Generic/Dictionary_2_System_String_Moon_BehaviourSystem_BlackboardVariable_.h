#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_.h>
#include <Modloader/app/structs/BlackboardVariable.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_Moon_BehaviourSystem_BlackboardVariable_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_Syste_Strin_Moo_BehaviourSyste_BlackboardVariabl_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_BehaviourSystem_BlackboardVariable_*, get_Values, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::String* key, app::BlackboardVariable** value))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_Moon_BehaviourSystem_BlackboardVariable_, GetEnumerator, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::String* key, app::BlackboardVariable* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_
