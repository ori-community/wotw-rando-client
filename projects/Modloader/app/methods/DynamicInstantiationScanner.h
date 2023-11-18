#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/DynamicInstantiationScanner.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_DynamicInstantiationDescriptor_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::DynamicInstantiationScanner {
    IL2CPP_REGISTER_METHOD(0x030E0670, void, EmitException, (app::Exception * ex, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x030E0720, void, EmitError, (app::String * message, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EmitWarning, (app::String * message, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x030E07E0, bool, IsSerializable, (app::FieldInfo_1 * field))
    IL2CPP_REGISTER_METHOD(0x030E08B0, bool, IsIncludedField, (app::FieldInfo_1 * field))
    IL2CPP_REGISTER_METHOD(0x030E0AC0, bool, IsIncludedType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x030E0E30, app::Type*, GetListElementType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x030E0F90, app::String*, GetFieldPath, (app::FieldInfo_1 * field))
    IL2CPP_REGISTER_METHOD(0x030E1080, app::String*, GetMethodPath, (app::MethodInfo_1 * method_1))
    IL2CPP_REGISTER_METHOD(0x030E1170, app::String*, GetGameObjectName_1, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x030E1240, app::String*, GetGameObjectName_2, (app::MonoBehaviour * component))
    IL2CPP_REGISTER_METHOD(0x030E1340, void, ctor, (app::DynamicInstantiationScanner * this_ptr, bool find_game_objects_without_attribute))
    IL2CPP_REGISTER_METHOD(0x030E15C0, app::DynamicInstantiationScanner_Visitor*, GetVisitor, (app::DynamicInstantiationScanner * this_ptr, app::Type* type, app::FieldInfo_1* declaring_field))
    IL2CPP_REGISTER_METHOD(0x030E20A0, void, EvaluateComponentOrScriptableObject, (app::DynamicInstantiationScanner * this_ptr, app::Object_1* obj, app::DynamicInstantiationScanner_EvaluationCtx** evaluation_ctx))
    IL2CPP_REGISTER_METHOD(0x030E2940, app::List_1_DynamicInstantiationDescriptor_*, FromMonoBehaviour, (app::DynamicInstantiationScanner * this_ptr, app::MonoBehaviour* component))
    IL2CPP_REGISTER_METHOD(0x030E2AD0, void, cctor, ())
} // namespace app::classes::DynamicInstantiationScanner
