#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Error {
    IL2CPP_REGISTER_METHOD(0x01FA9F00, app::Exception*, ReducibleMustOverrideReduce, )
    IL2CPP_REGISTER_METHOD(0x01FAA0B0, app::Exception*, InvalidMetaObjectCreated, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FAA270, app::Exception*, AmbiguousMatchInExpandoObject, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FAA430, app::Exception*, SameKeyExistsInExpando, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x01FAA600, app::Exception*, KeyDoesNotExistInExpando, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FAA7C0, app::Exception*, CollectionModifiedWhileEnumerating, )
    IL2CPP_REGISTER_METHOD(0x01FAA970, app::Exception*, CollectionReadOnly, )
    IL2CPP_REGISTER_METHOD(0x01FAAB20, app::Exception*, MustReduceToDifferent, )
    IL2CPP_REGISTER_METHOD(0x01FAACD0, app::Exception*, BinderNotCompatibleWithCallSite, app::Object* p0, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x01FAAEA0, app::Exception*, DynamicBindingNeedsRestrictions, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FAB070, app::Exception*, DynamicObjectResultNotAssignable, app::Object* p0, app::Object* p1, app::Object* p2, app::Object* p3)
    IL2CPP_REGISTER_METHOD(0x01FAB1F0, app::Exception*, DynamicBinderResultNotAssignable, app::Object* p0, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x01FAB3C0, app::Exception*, BindingCannotBeNull, )
    IL2CPP_REGISTER_METHOD(0x01FAB570, app::Exception*, ReducedNotCompatible, )
    IL2CPP_REGISTER_METHOD(0x01FAB720, app::Exception*, SetterHasNoParams, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAB8E0, app::Exception*, PropertyCannotHaveRefType, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FABAA0, app::Exception*, IndexesOfSetGetMustMatch, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FABC60, app::Exception*, TypeParameterIsNotDelegate, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FABE20, app::Exception*, FirstArgumentMustBeCallSite, )
    IL2CPP_REGISTER_METHOD(0x01FABFD0, app::Exception*, AccessorsCannotHaveVarArgs, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAC190, app::Exception*, AccessorsCannotHaveByRefArgs_1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAC350, app::Exception*, AccessorsCannotHaveByRefArgs_2, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FAC370, app::Exception*, TypeMustBeDerivedFromSystemDelegate, )
    IL2CPP_REGISTER_METHOD(0x01FAC520, app::Exception*, NoOrInvalidRuleProduced, )
    IL2CPP_REGISTER_METHOD(0x01FAC6D0, app::Exception*, BoundsCannotBeLessThanOne, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAC890, app::Exception*, TypeMustNotBeByRef, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FACA50, app::Exception*, TypeMustNotBePointer, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FACC10, app::Exception*, SetterMustBeVoid, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FACDD0, app::Exception*, PropertyTypeMustMatchGetter, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FACF90, app::Exception*, PropertyTypeMustMatchSetter, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAD150, app::Exception*, BothAccessorsMustBeStatic, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAD310, app::Exception*, OnlyStaticFieldsHaveNullInstance, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAD4D0, app::Exception*, OnlyStaticPropertiesHaveNullInstance, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAD690, app::Exception*, OnlyStaticMethodsHaveNullInstance, )
    IL2CPP_REGISTER_METHOD(0x01FAD840, app::Exception*, PropertyTypeCannotBeVoid, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FADA00, app::Exception*, InvalidUnboxType, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FADBC0, app::Exception*, ExpressionMustBeWriteable, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FADD80, app::Exception*, ArgumentMustNotHaveValueType, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FADF40, app::Exception*, MustBeReducible, )
    IL2CPP_REGISTER_METHOD(0x01FAE0F0, app::Exception*, AllTestValuesMustHaveSameType, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAE2B0, app::Exception*, AllCaseBodiesMustHaveSameType, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAE470, app::Exception*, DefaultBodyMustBeSupplied, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAE630, app::Exception*, LabelMustBeVoidOrHaveExpression, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAE7F0, app::Exception*, LabelTypeMustBeVoid, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAE9B0, app::Exception*, QuotedExpressionMustBeLambda, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAEB70, app::Exception*, VariableMustNotBeByRef_1, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAED40, app::Exception*, VariableMustNotBeByRef_2, app::Object* p0, app::Object* p1, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FAED80, app::Exception*, DuplicateVariable_1, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAEF50, app::Exception*, DuplicateVariable_2, app::Object* p0, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FAEF80, app::Exception*, FaultCannotHaveCatchOrFinally, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAF140, app::Exception*, TryMustHaveCatchFinallyOrFault, )
    IL2CPP_REGISTER_METHOD(0x01FAF2F0, app::Exception*, BodyOfCatchMustHaveSameTypeAsBodyOfTry, )
    IL2CPP_REGISTER_METHOD(0x01FAF4A0, app::Exception*, ExtensionNodeMustOverrideProperty, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FAF660, app::Exception*, UserDefinedOperatorMustBeStatic, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAF830, app::Exception*, UserDefinedOperatorMustNotBeVoid, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FAFA00, app::Exception*, CoercionOperatorNotDefined, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FAFBD0, app::Exception*, UnaryOperatorNotDefined, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FAFDA0, app::Exception*, BinaryOperatorNotDefined, app::Object* p0, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x01FAFF70, app::Exception*, ReferenceEqualityNotDefined, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB0140, app::Exception*, OperandTypesDoNotMatchParameters, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB0310, app::Exception*, OverloadOperatorTypeDoesNotMatchConversionType, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB04E0, app::Exception*, ConversionIsNotSupportedForArithmeticTypes, )
    IL2CPP_REGISTER_METHOD(0x01FB0690, app::Exception*, ArgumentMustBeArray, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB0850, app::Exception*, ArgumentMustBeBoolean, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB0A10, app::Exception*, EqualityMustReturnBoolean, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB0BE0, app::Exception*, ArgumentMustBeFieldInfoOrPropertyInfo, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB0DA0, app::Exception*, ArgumentMustBeFieldInfoOrPropertyInfoOrMethod_1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB0F60, app::Exception*, ArgumentMustBeFieldInfoOrPropertyInfoOrMethod_2, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB0F80, app::Exception*, ArgumentMustBeInstanceMember_1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB1140, app::Exception*, ArgumentMustBeInstanceMember_2, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB1160, app::Exception*, ArgumentMustBeInteger_1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB1320, app::Exception*, ArgumentMustBeInteger_2, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB1340, app::Exception*, ArgumentMustBeArrayIndexType, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB1500, app::Exception*, ArgumentMustBeSingleDimensionalArrayType, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB16C0, app::Exception*, ArgumentTypesMustMatch_1, )
    IL2CPP_REGISTER_METHOD(0x01FB1820, app::Exception*, ArgumentTypesMustMatch_2, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB1990, app::Exception*, CannotAutoInitializeValueTypeMemberThroughProperty, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FB1B50, app::Exception*, IncorrectTypeForTypeAs, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB1D20, app::Exception*, CoalesceUsedOnNonNullType, )
    IL2CPP_REGISTER_METHOD(0x01FB1ED0, app::Exception*, ExpressionTypeCannotInitializeArrayType, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB20A0, app::Exception*, ArgumentTypeDoesNotMatchMember_1, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(
        0x01FB2270,
        app::Exception*,
        ArgumentTypeDoesNotMatchMember_2,
        app::Object* p0,
        app::Object* p1,
        app::String* param_name,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01FB22B0, app::Exception*, ArgumentMemberNotDeclOnType_1, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB2480, app::Exception*, ArgumentMemberNotDeclOnType_2, app::Object* p0, app::Object* p1, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB24C0, app::Exception*, ExpressionTypeDoesNotMatchReturn, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB2690, app::Exception*, ExpressionTypeDoesNotMatchAssignment, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB2860, app::Exception*, ExpressionTypeDoesNotMatchLabel, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB2A30, app::Exception*, ExpressionTypeNotInvocable, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB2C00, app::Exception*, InstanceFieldNotDefinedForType, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB2DD0, app::Exception*, FieldInfoNotDefinedForType, app::Object* p0, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x01FB2FA0, app::Exception*, IncorrectNumberOfIndexes, )
    IL2CPP_REGISTER_METHOD(0x01FB3150, app::Exception*, IncorrectNumberOfLambdaDeclarationParameters, )
    IL2CPP_REGISTER_METHOD(0x01FB3300, app::Exception*, IncorrectNumberOfMembersForGivenConstructor, )
    IL2CPP_REGISTER_METHOD(0x01FB34B0, app::Exception*, IncorrectNumberOfArgumentsForMembers, )
    IL2CPP_REGISTER_METHOD(0x01FB3660, app::Exception*, LambdaTypeMustBeDerivedFromSystemDelegate, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB3820, app::Exception*, MemberNotFieldOrProperty, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB39F0, app::Exception*, MethodContainsGenericParameters, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB3BC0, app::Exception*, MethodIsGeneric, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB3D90, app::Exception*, MethodNotPropertyAccessor_1, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB3F60, app::Exception*, MethodNotPropertyAccessor_2, app::Object* p0, app::Object* p1, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB3FA0, app::Exception*, PropertyDoesNotHaveGetter_1, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB4170, app::Exception*, PropertyDoesNotHaveGetter_2, app::Object* p0, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB41A0, app::Exception*, PropertyDoesNotHaveSetter, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB4370, app::Exception*, PropertyDoesNotHaveAccessor, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB4540, app::Exception*, NotAMemberOfType_1, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB4710, app::Exception*, NotAMemberOfType_2, app::Object* p0, app::Object* p1, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB4750, app::Exception*, NotAMemberOfAnyType, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB4920, app::Exception*, ParameterExpressionNotValidAsDelegate, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB4AF0, app::Exception*, PropertyNotDefinedForType, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB4CC0, app::Exception*, InstancePropertyNotDefinedForType, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB4E90, app::Exception*, InstanceAndMethodTypeMismatch, app::Object* p0, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x01FB5060, app::Exception*, ElementInitializerMethodNotAdd, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB5220, app::Exception*, ElementInitializerMethodNoRefOutParam, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB53F0, app::Exception*, ElementInitializerMethodWithZeroArgs, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB55B0, app::Exception*, ElementInitializerMethodStatic, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB5770, app::Exception*, TypeNotIEnumerable, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB5940, app::Exception*, UnhandledBinary, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB5B10, app::Exception*, UnhandledBindingType, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FB5CD0, app::Exception*, UnhandledUnary, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB5EA0, app::Exception*, UnknownBindingType, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB60D0, app::Exception*, UserDefinedOpMustHaveConsistentTypes, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB62A0, app::Exception*, UserDefinedOpMustHaveValidReturnType, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB6470, app::Exception*, LogicalOperatorMustHaveBooleanOperators, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB6640, app::Exception*, MethodWithArgsDoesNotExistOnType, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB6810, app::Exception*, GenericMethodWithArgsDoesNotExistOnType, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB69E0, app::Exception*, MethodWithMoreThanOneMatch, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB6BB0, app::Exception*, ArgumentCannotBeOfTypeVoid, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB6D70, app::Exception*, OutOfRange, app::String* param_name, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB6F40, app::Exception*, LabelTargetAlreadyDefined, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FB7100, app::Exception*, LabelTargetUndefined, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FB72C0, app::Exception*, ControlCannotLeaveFinally, )
    IL2CPP_REGISTER_METHOD(0x01FB7470, app::Exception*, ControlCannotLeaveFilterTest, )
    IL2CPP_REGISTER_METHOD(0x01FB7620, app::Exception*, AmbiguousJump, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FB77E0, app::Exception*, ControlCannotEnterTry, )
    IL2CPP_REGISTER_METHOD(0x01FB7990, app::Exception*, ControlCannotEnterExpression, )
    IL2CPP_REGISTER_METHOD(0x01FB7B40, app::Exception*, NonLocalJumpWithValue, app::Object* p0)
    IL2CPP_REGISTER_METHOD(0x01FB7D00, app::Exception*, InvalidLvalue, app::ExpressionType__Enum p0)
    IL2CPP_REGISTER_METHOD(0x01FB7ED0, app::Exception*, RethrowRequiresCatch, )
    IL2CPP_REGISTER_METHOD(0x01FB8080, app::Exception*, MustRewriteToSameNode, app::Object* p0, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x01FB8250, app::Exception*, MustRewriteChildToSameType, app::Object* p0, app::Object* p1, app::Object* p2)
    IL2CPP_REGISTER_METHOD(0x01FB8420, app::Exception*, MustRewriteWithoutMethod, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB85F0, app::Exception*, TestValueTypeDoesNotMatchComparisonMethodParameter, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB87C0, app::Exception*, SwitchValueTypeDoesNotMatchComparisonMethodParameter, app::Object* p0, app::Object* p1)
    IL2CPP_REGISTER_METHOD(0x01FB8990, app::Exception*, ArgumentOutOfRange, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB8AF0, app::Exception*, NotSupported, )
    IL2CPP_REGISTER_METHOD(0x01FB8C30, app::Exception*, NonStaticConstructorRequired, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB8DF0, app::Exception*, NonAbstractConstructorRequired, )
    IL2CPP_REGISTER_METHOD(0x01FB8FA0, app::Exception*, InvalidProgram, )
    IL2CPP_REGISTER_METHOD(0x01FB9150, app::Exception*, EnumerationIsDone, )
    IL2CPP_REGISTER_METHOD(0x01FB9300, app::Exception*, TypeContainsGenericParameters_1, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB94D0, app::Exception*, TypeContainsGenericParameters_2, app::Object* p0, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB9500, app::Exception*, TypeIsGeneric_1, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FB96D0, app::Exception*, TypeIsGeneric_2, app::Object* p0, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FB9700, app::Exception*, IncorrectNumberOfConstructorArguments, )
    IL2CPP_REGISTER_METHOD(
        0x01FB98B0,
        app::Exception*,
        ExpressionTypeDoesNotMatchMethodParameter_1,
        app::Object* p0,
        app::Object* p1,
        app::Object* p2,
        app::String* param_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01FB9A90,
        app::Exception*,
        ExpressionTypeDoesNotMatchMethodParameter_2,
        app::Object* p0,
        app::Object* p1,
        app::Object* p2,
        app::String* param_name,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01FB9AE0, app::Exception*, ExpressionTypeDoesNotMatchParameter_1, app::Object* p0, app::Object* p1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(
        0x01FB9CB0,
        app::Exception*,
        ExpressionTypeDoesNotMatchParameter_2,
        app::Object* p0,
        app::Object* p1,
        app::String* param_name,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01FB9CF0, app::Exception*, IncorrectNumberOfLambdaArguments, )
    IL2CPP_REGISTER_METHOD(0x01FB9EA0, app::Exception*, IncorrectNumberOfMethodCallArguments, app::Object* p0, app::String* param_name)
    IL2CPP_REGISTER_METHOD(
        0x01FBA070,
        app::Exception*,
        ExpressionTypeDoesNotMatchConstructorParameter_1,
        app::Object* p0,
        app::Object* p1,
        app::String* param_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01FBA240,
        app::Exception*,
        ExpressionTypeDoesNotMatchConstructorParameter_2,
        app::Object* p0,
        app::Object* p1,
        app::String* param_name,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01FBA280, app::Exception*, ExpressionMustBeReadable_1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FBA440, app::Exception*, ExpressionMustBeReadable_2, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FBA460, app::Exception*, InvalidArgumentValue, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FBA620, app::Exception*, NonEmptyCollectionRequired, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FBA7E0, app::Exception*, InvalidNullValue, app::Type* type, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FBA9B0, app::Exception*, InvalidTypeException, app::Object* value, app::Type* type, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01FBABB0, app::String*, GetParamName, app::String* param_name, int32_t index)
} // namespace app::classes::System::Linq::Expressions::Error
