#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EvaluateException.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/InvalidExpressionException.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OperatorInfo.h>
#include <Modloader/app/structs/OverflowException.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SyntaxErrorException.h>
#include <Modloader/app/structs/Tokens__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::ExprException {
    IL2CPP_REGISTER_METHOD(0x01F57D10, app::OverflowException*, _Overflow, app::String* error)
    IL2CPP_REGISTER_METHOD(0x01F57E70, app::InvalidExpressionException*, _Expr, app::String* error)
    IL2CPP_REGISTER_METHOD(0x01F57FD0, app::SyntaxErrorException*, _Syntax, app::String* error)
    IL2CPP_REGISTER_METHOD(0x01F58130, app::EvaluateException*, _Eval_1, app::String* error)
    IL2CPP_REGISTER_METHOD(0x01F58290, app::EvaluateException*, _Eval_2, app::String* error, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01F583F0, app::Exception*, InvokeArgument, )
    IL2CPP_REGISTER_METHOD(0x01F58470, app::Exception*, NYI, app::String* moreinfo)
    IL2CPP_REGISTER_METHOD(0x01F58640, app::Exception*, MissingOperand, app::OperatorInfo* before)
    IL2CPP_REGISTER_METHOD(0x01F58710, app::Exception*, MissingOperator, app::String* token)
    IL2CPP_REGISTER_METHOD(0x01F587A0, app::Exception*, TypeMismatch, app::String* expr)
    IL2CPP_REGISTER_METHOD(0x01F58830, app::Exception*, FunctionArgumentOutOfRange, app::String* arg, app::String* func)
    IL2CPP_REGISTER_METHOD(0x01F588D0, app::Exception*, ExpressionTooComplex, )
    IL2CPP_REGISTER_METHOD(0x01F58950, app::Exception*, UnboundName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F589E0, app::Exception*, InvalidString, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01F58A70, app::Exception*, UndefinedFunction, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F58B00, app::Exception*, SyntaxError, )
    IL2CPP_REGISTER_METHOD(0x01F58B80, app::Exception*, FunctionArgumentCount, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F58C10, app::Exception*, MissingRightParen, )
    IL2CPP_REGISTER_METHOD(0x01F58C90, app::Exception*, UnknownToken_1, app::String* token, int32_t position)
    IL2CPP_REGISTER_METHOD(0x01F58D70, app::Exception*, UnknownToken_2, app::Tokens__Enum tok_expected, app::Tokens__Enum tok_curr, int32_t position)
    IL2CPP_REGISTER_METHOD(0x01F58ED0, app::Exception*, DatatypeConvertion, app::Type* type1, app::Type* type2)
    IL2CPP_REGISTER_METHOD(0x01F58FB0, app::Exception*, DatavalueConvertion, app::Object* value, app::Type* type, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01F591E0, app::Exception*, InvalidName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F59270, app::Exception*, InvalidDate, app::String* date)
    IL2CPP_REGISTER_METHOD(0x01F59300, app::Exception*, NonConstantArgument, )
    IL2CPP_REGISTER_METHOD(0x01F59380, app::Exception*, InvalidPattern, app::String* pat)
    IL2CPP_REGISTER_METHOD(0x01F59410, app::Exception*, InWithoutParentheses, )
    IL2CPP_REGISTER_METHOD(0x01F59490, app::Exception*, InWithoutList, )
    IL2CPP_REGISTER_METHOD(0x01F59510, app::Exception*, InvalidIsSyntax, )
    IL2CPP_REGISTER_METHOD(0x01F59590, app::Exception*, Overflow, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01F59780, app::Exception*, ArgumentType, app::String* function, int32_t arg, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01F598A0, app::Exception*, ArgumentTypeInteger, app::String* function, int32_t arg)
    IL2CPP_REGISTER_METHOD(0x01F59980, app::Exception*, TypeMismatchInBinop, int32_t op, app::Type* type1, app::Type* type2)
    IL2CPP_REGISTER_METHOD(0x01F59AA0, app::Exception*, AmbiguousBinop, int32_t op, app::Type* type1, app::Type* type2)
    IL2CPP_REGISTER_METHOD(0x01F59BC0, app::Exception*, UnsupportedOperator, int32_t op)
    IL2CPP_REGISTER_METHOD(0x01F59C80, app::Exception*, InvalidNameBracketing, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F59D10, app::Exception*, MissingOperandBefore, app::String* op)
    IL2CPP_REGISTER_METHOD(0x01F59DA0, app::Exception*, TooManyRightParentheses, )
    IL2CPP_REGISTER_METHOD(0x01F59E20, app::Exception*, UnresolvedRelation, app::String* name, app::String* expr)
    IL2CPP_REGISTER_METHOD(0x01F59EC0, app::EvaluateException*, BindFailure, app::String* relation_name)
    IL2CPP_REGISTER_METHOD(0x01F59F50, app::Exception*, AggregateArgument, )
    IL2CPP_REGISTER_METHOD(0x01F59FD0, app::Exception*, AggregateUnbound, app::String* expr)
    IL2CPP_REGISTER_METHOD(0x01F5A060, app::Exception*, EvalNoContext, )
    IL2CPP_REGISTER_METHOD(0x01F5A0E0, app::Exception*, ExpressionUnbound, app::String* expr)
    IL2CPP_REGISTER_METHOD(0x01F5A170, app::Exception*, ComputeNotAggregate, app::String* expr)
    IL2CPP_REGISTER_METHOD(0x01F5A200, app::Exception*, FilterConvertion, app::String* expr)
    IL2CPP_REGISTER_METHOD(0x01F5A290, app::Exception*, LookupArgument, )
    IL2CPP_REGISTER_METHOD(0x01F5A310, app::Exception*, InvalidType, app::String* type_name)
    IL2CPP_REGISTER_METHOD(0x01F5A3A0, app::Exception*, InvalidHoursArgument, )
    IL2CPP_REGISTER_METHOD(0x01F5A420, app::Exception*, InvalidMinutesArgument, )
    IL2CPP_REGISTER_METHOD(0x01F5A4A0, app::Exception*, InvalidTimeZoneRange, )
    IL2CPP_REGISTER_METHOD(0x01F5A520, app::Exception*, MismatchKindandTimeSpan, )
    IL2CPP_REGISTER_METHOD(0x01F5A5A0, app::Exception*, UnsupportedDataType, app::Type* type)
} // namespace app::classes::System::Data::ExprException
