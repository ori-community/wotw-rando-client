#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/ParameterExpression__Array.h>
#include <Modloader/app/structs/IParameterProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IArgumentProvider.h>

namespace app::classes::System::Dynamic::Utils::ExpressionVisitorUtils {
    IL2CPP_REGISTER_METHOD(0x01F95420, app::Expression__Array*, VisitBlockExpressions, (app::ExpressionVisitor * visitor, app::BlockExpression* block))
    IL2CPP_REGISTER_METHOD(0x01F95640, app::ParameterExpression__Array*, VisitParameters, (app::ExpressionVisitor * visitor, app::IParameterProvider* nodes, app::String* caller_name))
    IL2CPP_REGISTER_METHOD(0x01F95860, app::Expression__Array*, VisitArguments, (app::ExpressionVisitor * visitor, app::IArgumentProvider* nodes))
} // namespace app::classes::System::Dynamic::Utils::ExpressionVisitorUtils
