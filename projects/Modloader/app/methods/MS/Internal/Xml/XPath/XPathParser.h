#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AstNode.h>
#include <Modloader/app/structs/Axis_AxisType__Enum.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XPathNodeType__Enum.h>
#include <Modloader/app/structs/XPathParser.h>
#include <Modloader/app/structs/XPathResultType__Enum.h>
#include <Modloader/app/structs/XPathScanner.h>
#include <Modloader/app/structs/XPathScanner_LexKind__Enum.h>

namespace app::classes::MS::Internal::Xml::XPath::XPathParser {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::XPathParser* this_ptr, app::XPathScanner* scanner)
    IL2CPP_REGISTER_METHOD(0x021D94F0, app::AstNode*, ParseXPathExpresion, app::String* xpath_expresion)
    IL2CPP_REGISTER_METHOD(0x021D9810, app::AstNode*, ParseExpresion, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021D98D0, app::AstNode*, ParseOrExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021D9B00, app::AstNode*, ParseAndExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021D9D30, app::AstNode*, ParseEqualityExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021D9F30, app::AstNode*, ParseRelationalExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DA140, app::AstNode*, ParseAdditiveExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DA340, app::AstNode*, ParseMultiplicativeExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DA600, app::AstNode*, ParseUnaryExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DA930, app::AstNode*, ParseUnionExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DAB60, bool, IsNodeType, app::XPathScanner* scaner)
    IL2CPP_REGISTER_METHOD(0x021DACE0, app::AstNode*, ParsePathExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DAFA0, app::AstNode*, ParseFilterExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DB190, app::AstNode*, ParsePredicate, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DB240, app::AstNode*, ParseLocationPath, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DB5E0, app::AstNode*, ParseRelativeLocationPath, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DB7C0, bool, IsStep, app::XPathScanner_LexKind__Enum lex_kind)
    IL2CPP_REGISTER_METHOD(0x021DB7F0, app::AstNode*, ParseStep, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(
        0x021DBD60,
        app::AstNode*,
        ParseNodeTest,
        app::XPathParser* this_ptr,
        app::AstNode* qy_input,
        app::Axis_AxisType__Enum axis_type,
        app::XPathNodeType__Enum node_type
    )
    IL2CPP_REGISTER_METHOD(0x021DC220, bool, IsPrimaryExpr, app::XPathScanner* scanner)
    IL2CPP_REGISTER_METHOD(0x021DC300, app::AstNode*, ParsePrimaryExpr, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DC880, app::AstNode*, ParseMethod, app::XPathParser* this_ptr, app::AstNode* qy_input)
    IL2CPP_REGISTER_METHOD(0x021DD5E0, void, CheckToken, app::XPathParser* this_ptr, app::XPathScanner_LexKind__Enum t)
    IL2CPP_REGISTER_METHOD(0x021DD6C0, void, PassToken, app::XPathParser* this_ptr, app::XPathScanner_LexKind__Enum t)
    IL2CPP_REGISTER_METHOD(0x021DD6F0, void, NextLex, app::XPathParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021DD710, bool, TestOp, app::XPathParser* this_ptr, app::String* op)
    IL2CPP_REGISTER_METHOD(0x021DD780, void, CheckNodeSet, app::XPathParser* this_ptr, app::XPathResultType__Enum t)
    IL2CPP_REGISTER_METHOD(0x021DD850, app::Hashtable*, CreateFunctionTable, )
    IL2CPP_REGISTER_METHOD(0x021DF450, app::Hashtable*, CreateAxesTable, )
    IL2CPP_REGISTER_METHOD(0x021DF860, app::Axis_AxisType__Enum, GetAxis, app::XPathParser* this_ptr, app::XPathScanner* scaner)
    IL2CPP_REGISTER_METHOD(0x021DF9B0, void, cctor, )
} // namespace app::classes::MS::Internal::Xml::XPath::XPathParser
