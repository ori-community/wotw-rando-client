#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_UnityEngine_GameObject_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470F648, MoonReference_1_UnityEngine_GameObject__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::GameObject*, Resolve, (app::MoonReference_1_UnityEngine_GameObject_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047805A8, MoonReference_1_UnityEngine_GameObject__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_UnityEngine_GameObject_ * this_ptr, app::GameObject** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04790C98, MoonReference_1_UnityEngine_GameObject__TryResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::GameObject*, SafeResolve, (app::MoonReference_1_UnityEngine_GameObject_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047033E8, MoonReference_1_UnityEngine_GameObject__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* reference))
    IL2CPP_REGISTER_METHODINFO(0x04740840, MoonReference_1_UnityEngine_GameObject___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (app::MoonReference_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* new_value))
    IL2CPP_REGISTER_METHODINFO(0x04729958, MoonReference_1_UnityEngine_GameObject__SetStaticValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027208E0, bool, get_IsStaticValue, (app::MoonReference_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763CE8, MoonReference_1_UnityEngine_GameObject__get_IsStaticValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02721A70, void, SetValueInResolver, (app::MoonReference_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04792A80, MoonReference_1_UnityEngine_GameObject__SetValueInResolver__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_UnityEngine_GameObject_
