#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_ICondition_.h>

namespace app::classes::Moon::MoonReference_1_ICondition_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::ICondition*, SafeResolve, app::MoonReference_1_ICondition_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_ICondition_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ICondition*, Resolve, app::MoonReference_1_ICondition_* this_ptr, app::IMoonResolverContext* context)
} // namespace app::classes::Moon::MoonReference_1_ICondition_
