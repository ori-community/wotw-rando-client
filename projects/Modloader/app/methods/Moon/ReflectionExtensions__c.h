#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReflectionExtensions_c.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::ReflectionExtensions___c {
    IL2CPP_REGISTER_METHOD(0x025663F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReflectionExtensions_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02566530, bool, _GetLoadableTypes_b__0_0, (app::ReflectionExtensions_c * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHODINFO(0x04719B28, ReflectionExtensions_c__GetLoadableTypes_b__0_0__MethodInfo)
} // namespace app::classes::Moon::ReflectionExtensions___c
