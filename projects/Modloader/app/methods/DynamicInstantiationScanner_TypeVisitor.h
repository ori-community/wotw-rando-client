#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DynamicInstantiationScanner_TypeVisitor {
    IL2CPP_REGISTER_METHOD(0x030E7390, void, ctor, (app::DynamicInstantiationScanner_TypeVisitor * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x030E81E0, app::Expression*, Visit, (app::DynamicInstantiationScanner_TypeVisitor * this_ptr, app::DynamicInstantiationScanner_VisitorCtx* visitor_ctx))
    IL2CPP_REGISTER_METHODINFO(0x0476ACB0, DynamicInstantiationScanner_TypeVisitor_Visit__MethodInfo)
} // namespace app::classes::DynamicInstantiationScanner_TypeVisitor
