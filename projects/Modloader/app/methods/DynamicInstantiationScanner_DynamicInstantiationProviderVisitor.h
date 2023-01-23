#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_DynamicInstantiationProviderVisitor.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/DynamicInstantiationProviderAttribute.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor {
    IL2CPP_REGISTER_METHOD(0x030E4410, void, ctor, (app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor * this_ptr, app::Type* type, app::DynamicInstantiationProviderAttribute* attribute, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x030E4450, app::Expression*, Visit, (app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor * this_ptr, app::DynamicInstantiationScanner_VisitorCtx* visitor_ctx))
    IL2CPP_REGISTER_METHOD(0x030E4AD0, void, Evaluate, (app::MethodInfo_1 * method_1, app::DynamicInstantiationScanner_EvaluationCtx** evaluation_ctx, app::Action* fill_list))
    IL2CPP_REGISTER_METHOD(0x030E4F60, void, cctor, ())
} // namespace app::classes::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor
