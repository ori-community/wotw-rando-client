#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugInfoExpression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression_DebugInfoExpressionProxy.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SymbolDocumentInfo.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_DebugInfoExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4B70, void, ctor, app::Expression_DebugInfoExpressionProxy* this_ptr, app::DebugInfoExpression* node)
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::SymbolDocumentInfo*, get_Document, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717120, int32_t, get_EndColumn, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017170F0, int32_t, get_EndLine, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsClear, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017170C0, int32_t, get_StartColumn, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00442880, int32_t, get_StartLine, app::Expression_DebugInfoExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, app::Expression_DebugInfoExpressionProxy* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Expression_DebugInfoExpressionProxy
