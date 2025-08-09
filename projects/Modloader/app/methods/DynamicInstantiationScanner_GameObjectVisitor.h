#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_GameObjectVisitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_VisitorCtx.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>

namespace app::classes::DynamicInstantiationScanner_GameObjectVisitor {
    IL2CPP_REGISTER_METHOD(
        0x030E5C50,
        void,
        ctor,
        app::DynamicInstantiationScanner_GameObjectVisitor* this_ptr,
        bool is_moon_reference,
        app::FieldInfo_1* field,
        app::DynamicInstantiationAttribute* attribute
    )
    IL2CPP_REGISTER_METHOD(
        0x030E5D50,
        app::Expression*,
        Visit,
        app::DynamicInstantiationScanner_GameObjectVisitor* this_ptr,
        app::DynamicInstantiationScanner_VisitorCtx* visitor_ctx
    )
    IL2CPP_REGISTER_METHOD(
        0x030E6E60,
        void,
        Evaluate,
        app::FieldInfo_1* field,
        app::DynamicInstantiationScanner_EvaluationCtx** evaluation_ctx,
        app::GameObject* go,
        int32_t count,
        bool nullable
    )
    IL2CPP_REGISTER_METHOD(
        0x030E7150,
        void,
        EvaluateMoonReference,
        app::FieldInfo_1* field,
        app::DynamicInstantiationScanner_EvaluationCtx** evaluation_ctx,
        app::MoonReference_1_UnityEngine_GameObject_* moon_reference,
        int32_t count,
        bool nullable
    )
    IL2CPP_REGISTER_METHOD(0x030E7280, void, cctor, )
} // namespace app::classes::DynamicInstantiationScanner_GameObjectVisitor
