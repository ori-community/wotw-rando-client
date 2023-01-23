#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx.h>
#include <Modloader/app/structs/DynamicInstantiationScanner.h>

namespace app::classes::DynamicInstantiationScanner_VisitorCtx {
    IL2CPP_REGISTER_METHOD(0x030E8A70, void, ctor, (app::DynamicInstantiationScanner_VisitorCtx * this_ptr, app::DynamicInstantiationScanner* scanner))
}
