#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlackboardVariable.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_* this_ptr,
        int32_t key,
        app::BlackboardVariable** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_* this_ptr,
        int32_t key,
        app::BlackboardVariable* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_
