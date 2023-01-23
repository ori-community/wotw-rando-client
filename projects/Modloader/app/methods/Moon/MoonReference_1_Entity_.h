#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_Entity_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/Entity.h>

namespace app::classes::Moon::MoonReference_1_Entity_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_Entity_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04768FC8, MoonReference_1_Entity__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::Entity*, Resolve, (app::MoonReference_1_Entity_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04785B68, MoonReference_1_Entity__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_Entity_
