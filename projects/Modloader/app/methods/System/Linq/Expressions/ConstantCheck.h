#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnalyzeTypeIsResult__Enum.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeBinaryExpression.h>

namespace app::classes::System::Linq::Expressions::ConstantCheck {
    IL2CPP_REGISTER_METHOD(0x01FA3530, app::AnalyzeTypeIsResult__Enum, AnalyzeTypeIs_1, app::TypeBinaryExpression* type_is)
    IL2CPP_REGISTER_METHOD(0x01FA3560, app::AnalyzeTypeIsResult__Enum, AnalyzeTypeIs_2, app::Expression* operand, app::Type* test_type)
} // namespace app::classes::System::Linq::Expressions::ConstantCheck
