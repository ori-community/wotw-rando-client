#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_IDialogActor_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/IDialogActor.h>

namespace app::classes::Moon::MoonReference_1_IDialogActor_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_IDialogActor_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470EA58, MoonReference_1_IDialogActor__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IDialogActor*, Resolve, (app::MoonReference_1_IDialogActor_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0471BF78, MoonReference_1_IDialogActor__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_IDialogActor_
