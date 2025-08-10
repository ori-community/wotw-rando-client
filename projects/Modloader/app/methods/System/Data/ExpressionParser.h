#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ExpressionNode.h>
#include <Modloader/app/structs/ExpressionParser.h>
#include <Modloader/app/structs/FunctionId__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Tokens__Enum.h>

namespace app::classes::System::Data::ExpressionParser {
    IL2CPP_REGISTER_METHOD(0x01F5A8B0, void, ctor, app::ExpressionParser* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F5A980, void, LoadExpression, app::ExpressionParser* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x01F5AA90, void, StartScan, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5AC30, app::ExpressionNode*, Parse, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5C890, app::ExpressionNode*, ParseAggregateArgument, app::ExpressionParser* this_ptr, app::FunctionId__Enum aggregate)
    IL2CPP_REGISTER_METHOD(0x01F5CCB0, app::ExpressionNode*, NodePop, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5CD00, app::ExpressionNode*, NodePeek, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5CD50, void, NodePush, app::ExpressionParser* this_ptr, app::ExpressionNode* node)
    IL2CPP_REGISTER_METHOD(0x01F5CE60, void, BuildExpression, app::ExpressionParser* this_ptr, int32_t pri)
    IL2CPP_REGISTER_METHOD(0x01F5D470, void, CheckToken, app::ExpressionParser* this_ptr, app::Tokens__Enum token)
    IL2CPP_REGISTER_METHOD(0x01F5D520, app::Tokens__Enum, Scan, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5DAA0, void, ScanNumeric, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5DD10, void, ScanName_1, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5DD80, void, ScanName_2, app::ExpressionParser* this_ptr, char16_t ch_end, char16_t esc, app::String* chars_to_escape)
    IL2CPP_REGISTER_METHOD(0x01F5DF50, void, ScanDate, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ScanBinaryConstant, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5E120, void, ScanReserved, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5E470, void, ScanString, app::ExpressionParser* this_ptr, char16_t escape)
    IL2CPP_REGISTER_METHOD(0x01F5E5F0, void, ScanToken, app::ExpressionParser* this_ptr, app::Tokens__Enum token)
    IL2CPP_REGISTER_METHOD(0x01F5E620, void, ScanWhite, app::ExpressionParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F5E680, bool, IsWhiteSpace, app::ExpressionParser* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01F5E690, bool, IsAlphaNumeric, app::ExpressionParser* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01F5E730, bool, IsDigit, app::ExpressionParser* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01F5E780, bool, IsAlpha, app::ExpressionParser* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x01F5E800, void, cctor, )
} // namespace app::classes::System::Data::ExpressionParser
