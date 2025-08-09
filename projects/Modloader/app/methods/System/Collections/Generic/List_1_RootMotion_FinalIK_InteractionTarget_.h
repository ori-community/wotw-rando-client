#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionTarget.h>
#include <Modloader/app/structs/InteractionTarget__Array.h>
#include <Modloader/app/structs/List_1_RootMotion_FinalIK_InteractionTarget_.h>

namespace app::classes::System::Collections::Generic::List_1_RootMotion_FinalIK_InteractionTarget_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_RootMotion_FinalIK_InteractionTarget_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_RootMotion_FinalIK_InteractionTarget_* this_ptr, app::InteractionTarget* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::InteractionTarget__Array*, ToArray, app::List_1_RootMotion_FinalIK_InteractionTarget_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_RootMotion_FinalIK_InteractionTarget_
