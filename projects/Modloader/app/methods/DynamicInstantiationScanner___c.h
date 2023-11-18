#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationScanner_c.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::DynamicInstantiationScanner___c {
    IL2CPP_REGISTER_METHOD(0x030E2DC0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DynamicInstantiationScanner_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__34_0, (app::DynamicInstantiationScanner_c * this_ptr, app::Object_1* comp, app::DynamicInstantiationScanner_EvaluationCtx** ctx))
} // namespace app::classes::DynamicInstantiationScanner___c
