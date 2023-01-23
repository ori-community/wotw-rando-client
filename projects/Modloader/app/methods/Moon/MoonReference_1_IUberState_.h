#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_IUberState_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/IUberState.h>

namespace app::classes::Moon::MoonReference_1_IUberState_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_IUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470FF90, MoonReference_1_IUberState__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IUberState*, Resolve, (app::MoonReference_1_IUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0475C6B0, MoonReference_1_IUberState__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::IUberState*, SafeResolve, (app::MoonReference_1_IUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047932E8, MoonReference_1_IUberState__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_IUberState_ * this_ptr, app::IUberState* reference))
    IL2CPP_REGISTER_METHODINFO(0x04706268, MoonReference_1_IUberState___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (app::MoonReference_1_IUberState_ * this_ptr, app::IUberState* new_value))
    IL2CPP_REGISTER_METHODINFO(0x04710F68, MoonReference_1_IUberState__SetStaticValue__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_IUberState_
