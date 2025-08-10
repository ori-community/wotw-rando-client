#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationPrewarmPriorityAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor {
    IL2CPP_REGISTER_METHOD(
        0x030E3AA0,
        void,
        ctor,
        app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor* this_ptr,
        app::Type* type,
        app::FieldInfo_1* field_info,
        app::DynamicInstantiationPrewarmPriorityAttribute* attribute,
        app::DynamicInstantiationScanner_Visitor* underlying
    )
    IL2CPP_REGISTER_METHOD(
        0x030E3AF0,
        app::Expression*,
        Visit,
        app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor* this_ptr,
        app::DynamicInstantiationScanner_VisitorCtx* visitor_ctx
    )
    IL2CPP_REGISTER_METHOD(0x030E4260, void, cctor, )
} // namespace app::classes::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor
