#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationScanner_TypeVisitor_c.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::DynamicInstantiationScanner_TypeVisitor___c {
    IL2CPP_REGISTER_METHOD(0x030E8840, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DynamicInstantiationScanner_TypeVisitor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030E8980, app::String*, _Visit_b__1_0, (app::DynamicInstantiationScanner_TypeVisitor_c * this_ptr, app::Type* x))
} // namespace app::classes::DynamicInstantiationScanner_TypeVisitor___c
