#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationScanner_ArrayOrListVisitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::DynamicInstantiationScanner_ArrayOrListVisitor {
    IL2CPP_REGISTER_METHOD(0x030E2F00, void, ctor, (app::DynamicInstantiationScanner_ArrayOrListVisitor * this_ptr, app::Type* type, app::DynamicInstantiationScanner_Visitor* underlying))
    IL2CPP_REGISTER_METHOD(0x030E2F30, app::Expression*, Visit, (app::DynamicInstantiationScanner_ArrayOrListVisitor * this_ptr, app::DynamicInstantiationScanner_VisitorCtx* visitor_ctx))
} // namespace app::classes::DynamicInstantiationScanner_ArrayOrListVisitor
