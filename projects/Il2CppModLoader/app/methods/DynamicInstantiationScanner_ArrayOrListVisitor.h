#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DynamicInstantiationScanner_ArrayOrListVisitor {
    IL2CPP_REGISTER_METHOD(0x030E2F00, void, ctor, (app::DynamicInstantiationScanner_ArrayOrListVisitor * this_ptr, app::Type * type, app::DynamicInstantiationScanner_Visitor * underlying))
    IL2CPP_REGISTER_METHOD(0x030E2F30, app::Expression *, Visit, (app::DynamicInstantiationScanner_ArrayOrListVisitor * this_ptr, app::DynamicInstantiationScanner_VisitorCtx * visitor_ctx))
}
