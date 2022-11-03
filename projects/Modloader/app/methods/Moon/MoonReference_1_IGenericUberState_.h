#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_IGenericUberState_ {
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_IGenericUberState_ * this_ptr, app::IGenericUberState* reference))
    IL2CPP_REGISTER_METHODINFO(0x047803D0, MoonReference_1_IGenericUberState___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetVolatileValue, (app::MoonReference_1_IGenericUberState_ * this_ptr, app::IGenericUberState* new_value))
    IL2CPP_REGISTER_METHODINFO(0x0473AE00, MoonReference_1_IGenericUberState__SetVolatileValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (app::MoonReference_1_IGenericUberState_ * this_ptr, app::IGenericUberState* new_value))
    IL2CPP_REGISTER_METHODINFO(0x047689B0, MoonReference_1_IGenericUberState__SetStaticValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::IGenericUberState*, SafeResolve, (app::MoonReference_1_IGenericUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04710310, MoonReference_1_IGenericUberState__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_IGenericUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04712358, MoonReference_1_IGenericUberState__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IGenericUberState*, Resolve, (app::MoonReference_1_IGenericUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04789C00, MoonReference_1_IGenericUberState__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_IGenericUberState_
