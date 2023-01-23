#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyTrigger.h>
#include <Modloader/app/structs/MoonReference_1_LegacyTrigger_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>

namespace app::classes::Moon::MoonReference_1_LegacyTrigger_ {
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::LegacyTrigger*, Resolve, (app::MoonReference_1_LegacyTrigger_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0477D8B8, MoonReference_1_LegacyTrigger__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_LegacyTrigger_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04719808, MoonReference_1_LegacyTrigger__CanResolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_LegacyTrigger_
