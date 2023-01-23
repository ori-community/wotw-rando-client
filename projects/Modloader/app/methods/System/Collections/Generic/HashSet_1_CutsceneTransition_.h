#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_CutsceneTransition_.h>
#include <Modloader/app/structs/HashSet_1_CutsceneTransition_.h>
#include <Modloader/app/structs/CutsceneTransition.h>

namespace app::classes::System::Collections::Generic::HashSet_1_CutsceneTransition_ {
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_CutsceneTransition_, GetEnumerator, (app::HashSet_1_CutsceneTransition_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047307A8, HashSet_1_CutsceneTransition__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_CutsceneTransition_ * this_ptr, app::CutsceneTransition* item))
    IL2CPP_REGISTER_METHODINFO(0x04751860, HashSet_1_CutsceneTransition__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, (app::HashSet_1_CutsceneTransition_ * this_ptr, app::CutsceneTransition* item))
    IL2CPP_REGISTER_METHODINFO(0x04754590, HashSet_1_CutsceneTransition__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_CutsceneTransition_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D350, HashSet_1_CutsceneTransition___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::HashSet_1_CutsceneTransition_
