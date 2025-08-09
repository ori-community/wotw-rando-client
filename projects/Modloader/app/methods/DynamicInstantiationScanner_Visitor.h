#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::DynamicInstantiationScanner_Visitor {
    IL2CPP_REGISTER_METHOD(0x030E89B0, void, ctor, app::DynamicInstantiationScanner_Visitor* this_ptr, app::Type* type)
}
