#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_.h>
#include <Modloader/app/structs/BlackboardVariable.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04700C78, Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, int32_t key, app::BlackboardVariable** value))
    IL2CPP_REGISTER_METHODINFO(0x047473B8, Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047424B8, Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_ * this_ptr, int32_t key, app::BlackboardVariable* value))
    IL2CPP_REGISTER_METHODINFO(0x0473C5E0, Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_
