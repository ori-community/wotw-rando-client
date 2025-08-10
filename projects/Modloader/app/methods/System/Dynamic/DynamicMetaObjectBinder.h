#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicMetaObjectBinder.h>
#include <Modloader/app/structs/DynamicMetaObject__Array.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Dynamic::DynamicMetaObjectBinder {
    IL2CPP_REGISTER_METHOD(0x01F8AF70, void, ctor, app::DynamicMetaObjectBinder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F8B000, app::Type*, get_ReturnType, app::DynamicMetaObjectBinder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F8B0A0,
        app::Expression*,
        Bind,
        app::DynamicMetaObjectBinder* this_ptr,
        app::Object__Array* args,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* parameters,
        app::LabelTarget* return_label
    )
    IL2CPP_REGISTER_METHOD(
        0x01F8B7A0,
        app::DynamicMetaObject__Array*,
        CreateArgumentMetaObjects,
        app::Object__Array* args,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
    IL2CPP_REGISTER_METHOD(0x01F8B960, app::Expression*, GetUpdateExpression, app::DynamicMetaObjectBinder* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStandardBinder, app::DynamicMetaObjectBinder* this_ptr)
} // namespace app::classes::System::Dynamic::DynamicMetaObjectBinder
