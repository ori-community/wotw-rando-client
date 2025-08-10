#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationScanner_TypeVisitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::DynamicInstantiationScanner_TypeVisitor {
    IL2CPP_REGISTER_METHOD(0x030E7390, void, ctor, app::DynamicInstantiationScanner_TypeVisitor* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x030E81E0,
        app::Expression*,
        Visit,
        app::DynamicInstantiationScanner_TypeVisitor* this_ptr,
        app::DynamicInstantiationScanner_VisitorCtx* visitor_ctx
    )
} // namespace app::classes::DynamicInstantiationScanner_TypeVisitor
