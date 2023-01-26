#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationScanner_ScriptableObjectVisitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ScriptableObject.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::DynamicInstantiationScanner_ScriptableObjectVisitor {
    IL2CPP_REGISTER_METHOD(0x030E7390, void, ctor, (app::DynamicInstantiationScanner_ScriptableObjectVisitor * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x030E73A0, app::Expression*, Visit, (app::DynamicInstantiationScanner_ScriptableObjectVisitor * this_ptr, app::DynamicInstantiationScanner_VisitorCtx* visitor_ctx))
    IL2CPP_REGISTER_METHOD(0x030E7520, void, Evaluate, (app::DynamicInstantiationScanner * scanner, app::DynamicInstantiationScanner_EvaluationCtx** evaluation_ctx, app::ScriptableObject* so))
    IL2CPP_REGISTER_METHOD(0x030E8110, void, cctor, ())
} // namespace app::classes::DynamicInstantiationScanner_ScriptableObjectVisitor
