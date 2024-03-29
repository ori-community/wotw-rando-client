#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PrimitiveParameterExpression_1_System_Single_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::PrimitiveParameterExpression_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x025462B0, void, ctor, (app::PrimitiveParameterExpression_1_System_Single_ * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02546A60, app::Type*, get_Type, (app::PrimitiveParameterExpression_1_System_Single_ * this_ptr))
} // namespace app::classes::System::Linq::Expressions::PrimitiveParameterExpression_1_System_Single_
