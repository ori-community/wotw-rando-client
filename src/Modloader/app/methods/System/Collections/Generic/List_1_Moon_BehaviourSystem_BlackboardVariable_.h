#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlackboardVariable.h>
#include <Modloader/app/structs/BlackboardVariable__Array.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_BehaviourSystem_BlackboardVariable_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariable_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_BehaviourSystem_BlackboardVariable_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_BehaviourSystem_BlackboardVariable_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_BehaviourSystem_BlackboardVariable_* this_ptr, app::BlackboardVariable* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::BlackboardVariable__Array*, ToArray, app::List_1_Moon_BehaviourSystem_BlackboardVariable_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_Moon_BehaviourSystem_BlackboardVariable_* this_ptr,
        app::IEnumerable_1_Moon_BehaviourSystem_BlackboardVariable_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_BehaviourSystem_BlackboardVariable_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_BehaviourSystem_BlackboardVariable_
