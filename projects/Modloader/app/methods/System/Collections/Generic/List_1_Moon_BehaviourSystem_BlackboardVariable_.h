#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariable_.h>
#include <Modloader/app/structs/BlackboardVariable.h>
#include <Modloader/app/structs/BlackboardVariable__Array.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_BehaviourSystem_BlackboardVariable_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_BehaviourSystem_BlackboardVariable_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708C90, List_1_Moon_BehaviourSystem_BlackboardVariable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::BlackboardVariable* item))
    IL2CPP_REGISTER_METHODINFO(0x0477A610, List_1_Moon_BehaviourSystem_BlackboardVariable__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::BlackboardVariable__Array*, ToArray, (app::List_1_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047661F8, List_1_Moon_BehaviourSystem_BlackboardVariable__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, app::IEnumerable_1_Moon_BehaviourSystem_BlackboardVariable_* collection))
    IL2CPP_REGISTER_METHODINFO(0x0472E4F8, List_1_Moon_BehaviourSystem_BlackboardVariable__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C7D0, List_1_Moon_BehaviourSystem_BlackboardVariable___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_BehaviourSystem_BlackboardVariable_
