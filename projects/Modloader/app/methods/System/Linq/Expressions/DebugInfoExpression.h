#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/DebugInfoExpression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/SymbolDocumentInfo.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionVisitor.h>

namespace app::classes::System::Linq::Expressions::DebugInfoExpression {
    IL2CPP_REGISTER_METHOD(0x01FA3900, app::Type*, get_Type, (app::DebugInfoExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E530, app::ExpressionType__Enum, get_NodeType, (app::DebugInfoExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA39A0, int32_t, get_StartLine, (app::DebugInfoExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783CB0, DebugInfoExpression_get_StartLine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FA39E0, int32_t, get_StartColumn, (app::DebugInfoExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733700, DebugInfoExpression_get_StartColumn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FA3A20, int32_t, get_EndLine, (app::DebugInfoExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E270, DebugInfoExpression_get_EndLine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FA3A60, int32_t, get_EndColumn, (app::DebugInfoExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769888, DebugInfoExpression_get_EndColumn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::SymbolDocumentInfo*, get_Document, (app::DebugInfoExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA3AA0, bool, get_IsClear, (app::DebugInfoExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766568, DebugInfoExpression_get_IsClear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FA3AE0, app::Expression*, Accept, (app::DebugInfoExpression * this_ptr, app::ExpressionVisitor* visitor))
} // namespace app::classes::System::Linq::Expressions::DebugInfoExpression
