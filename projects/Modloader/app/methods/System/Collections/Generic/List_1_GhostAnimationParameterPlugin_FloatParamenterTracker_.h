#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostAnimationParameterPlugin_FloatParamenterTracker.h>
#include <Modloader/app/structs/List_1_GhostAnimationParameterPlugin_FloatParamenterTracker_.h>

namespace app::classes::System::Collections::Generic::List_1_GhostAnimationParameterPlugin_FloatParamenterTracker_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_GhostAnimationParameterPlugin_FloatParamenterTracker_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_GhostAnimationParameterPlugin_FloatParamenterTracker_* this_ptr,
        app::GhostAnimationParameterPlugin_FloatParamenterTracker* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::GhostAnimationParameterPlugin_FloatParamenterTracker*,
        get_Item,
        app::List_1_GhostAnimationParameterPlugin_FloatParamenterTracker_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_GhostAnimationParameterPlugin_FloatParamenterTracker_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_GhostAnimationParameterPlugin_FloatParamenterTracker_
