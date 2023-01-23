#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_IDialogDecorator_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/IDialogDecorator.h>

namespace app::classes::Moon::MoonReference_1_IDialogDecorator_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_IDialogDecorator_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047619F0, MoonReference_1_IDialogDecorator__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IDialogDecorator*, Resolve, (app::MoonReference_1_IDialogDecorator_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0476D840, MoonReference_1_IDialogDecorator__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_IDialogDecorator_
