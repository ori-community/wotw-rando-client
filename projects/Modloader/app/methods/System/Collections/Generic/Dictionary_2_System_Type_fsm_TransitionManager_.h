#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_fsm_TransitionManager_.h>
#include <Modloader/app/structs/TransitionManager_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_fsm_TransitionManager_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Type_fsm_TransitionManager_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Type_fsm_TransitionManager_ * this_ptr, app::Type* key, app::TransitionManager_1** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_fsm_TransitionManager_ * this_ptr, app::Type* key, app::TransitionManager_1* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_fsm_TransitionManager_
