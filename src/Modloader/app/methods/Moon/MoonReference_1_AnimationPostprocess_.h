#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_AnimationPostprocess_.h>

namespace app::classes::Moon::MoonReference_1_AnimationPostprocess_ {
    IL2CPP_REGISTER_METHOD(
        0x027214E0,
        bool,
        TryResolve,
        app::MoonReference_1_AnimationPostprocess_* this_ptr,
        app::AnimationPostprocess** value,
        app::IMoonResolverContext* context
    )
}
