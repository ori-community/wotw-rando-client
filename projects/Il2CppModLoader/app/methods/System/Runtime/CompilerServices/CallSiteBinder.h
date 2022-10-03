#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::CallSiteBinder {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CallSiteBinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC7FE0, app::LabelTarget*, get_UpdateLabel, ())
    IL2CPP_REGISTER_METHOD(0x02FC8080, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, BindDelegate, (app::CallSiteBinder * this_ptr, app::CallSite_1_System_Object_* site, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x0157A5E0, app::Object*, BindCore, (app::CallSiteBinder * this_ptr, app::CallSite_1_System_Object_* site, app::Object__Array* args))
    IL2CPP_REGISTER_METHODINFO(0x04708B88, CallSiteBinder_BindCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E1400, void, CacheTarget, (app::CallSiteBinder * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHOD(0x0153C550, app::Expression_1_System_Object_*, Stitch, (app::Expression * binding, app::CallSiteBinder_LambdaSignature_1_System_Object_* signature))
    IL2CPP_REGISTER_METHOD(0x0153E330, app::RuleCache_1_System_Object_*, GetRuleCache, (app::CallSiteBinder * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::CallSiteBinder
