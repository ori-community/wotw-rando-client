#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TypeExtensions_c.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UWPCompat::Extensions::TypeExtensions___c {
    IL2CPP_REGISTER_METHOD(0x013DD770, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TypeExtensions_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DD8B0, app::Type*, _GetMethod_b__7_0, (app::TypeExtensions_c * this_ptr, app::Object* p))
    IL2CPP_REGISTER_METHODINFO(0x04772A78, TypeExtensions_c__GetMethod_b__7_0__MethodInfo)
} // namespace app::classes::UWPCompat::Extensions::TypeExtensions___c
