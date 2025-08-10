#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationPostprocessGroup.h>
#include <Modloader/app/structs/AnimationPostprocessGroupManager_GroupState.h>
#include <Modloader/app/structs/Dictionary_2_Moon_AnimationPostprocessGroup_Moo_AnimationPostprocessGroupManage_GroupStat_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_* this_ptr,
        app::AnimationPostprocessGroup* key,
        app::AnimationPostprocessGroupManager_GroupState** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_* this_ptr,
        app::AnimationPostprocessGroup* key,
        app::AnimationPostprocessGroupManager_GroupState* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_
