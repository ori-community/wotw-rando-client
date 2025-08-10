#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimator_.h>

namespace app::classes::Moon::MoonReference_1_MoonAnimator_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::MoonAnimator*, SafeResolve, app::MoonReference_1_MoonAnimator_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_MoonAnimator_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MoonAnimator*, Resolve, app::MoonReference_1_MoonAnimator_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x027206E0, void, ctor, app::MoonReference_1_MoonAnimator_* this_ptr, app::MoonReference_1_MoonAnimator_* moon_ref)
    IL2CPP_REGISTER_METHOD(
        0x027214E0,
        bool,
        TryResolve,
        app::MoonReference_1_MoonAnimator_* this_ptr,
        app::MoonAnimator** value,
        app::IMoonResolverContext* context
    )
} // namespace app::classes::Moon::MoonReference_1_MoonAnimator_
