#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Assembly.h>

namespace app::classes::System::Dynamic::Utils::TypeUtils {
    IL2CPP_REGISTER_METHOD(0x01F965B0, app::Type*, GetNonNullableType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F96620, app::Type*, GetNullableType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F967B0, bool, IsNullableType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F968B0, bool, IsNullableOrReferenceType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F968F0, bool, IsBool, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F969B0, bool, IsNumeric, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F96A90, bool, IsInteger, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F96B70, bool, IsArithmetic, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F96C50, bool, IsUnsignedInt, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F96D40, bool, IsIntegerOrBool, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F96E20, bool, IsNumericOrBool, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F96E50, bool, IsValidInstanceType, (app::MemberInfo_1 * member, app::Type* instance_type))
    IL2CPP_REGISTER_METHOD(0x01F971C0, bool, HasIdentityPrimitiveOrNullableConversionTo, (app::Type * source, app::Type* dest))
    IL2CPP_REGISTER_METHOD(0x01F973B0, bool, HasReferenceConversionTo, (app::Type * source, app::Type* dest))
    IL2CPP_REGISTER_METHOD(0x01F975F0, bool, IsCovariant, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01F97620, bool, IsContravariant, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01F97650, bool, IsInvariant, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01F97680, bool, IsDelegate, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01F97750, bool, IsLegalExplicitVariantDelegateConversion, (app::Type * source, app::Type* dest))
    IL2CPP_REGISTER_METHOD(0x01F97A90, bool, IsConvertible, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F97B70, bool, HasReferenceEquality, (app::Type * left, app::Type* right))
    IL2CPP_REGISTER_METHOD(0x01F97C30, bool, HasBuiltInEqualityOperator, (app::Type * left, app::Type* right))
    IL2CPP_REGISTER_METHOD(0x01F97E20, bool, IsImplicitlyConvertibleTo, (app::Type * source, app::Type* destination))
    IL2CPP_REGISTER_METHOD(0x01F98190, app::MethodInfo_1*, GetUserDefinedCoercionMethod, (app::Type * convert_from, app::Type* convert_to_type))
    IL2CPP_REGISTER_METHOD(0x01F98310, app::MethodInfo_1*, FindConversionOperator, (app::MethodInfo_1__Array * methods, app::Type* type_from, app::Type* type_to))
    IL2CPP_REGISTER_METHOD(0x01F98530, bool, IsImplicitNumericConversion, (app::Type * source, app::Type* destination))
    IL2CPP_REGISTER_METHOD(0x01F98730, bool, IsImplicitReferenceConversion, (app::Type * source, app::Type* destination))
    IL2CPP_REGISTER_METHOD(0x01F98760, bool, IsImplicitBoxingConversion, (app::Type * source, app::Type* destination))
    IL2CPP_REGISTER_METHOD(0x01F988E0, bool, IsImplicitNullableConversion, (app::Type * source, app::Type* destination))
    IL2CPP_REGISTER_METHOD(0x01F98940, app::Type*, FindGenericType, (app::Type * definition, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01F98C50, app::MethodInfo_1*, GetBooleanOperator, (app::Type * type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01F98E30, app::Type*, GetNonRefType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01F98E80, bool, AreEquivalent, (app::Type * t1, app::Type* t2))
    IL2CPP_REGISTER_METHOD(0x01F98F50, bool, AreReferenceAssignable, (app::Type * dest, app::Type* src))
    IL2CPP_REGISTER_METHOD(0x01F98FF0, bool, IsSameOrSubclass, (app::Type * type, app::Type* sub_type))
    IL2CPP_REGISTER_METHOD(0x01F99050, void, ValidateType_1, (app::Type * type, app::String* param_name))
    IL2CPP_REGISTER_METHOD(0x01F99070, void, ValidateType_2, (app::Type * type, app::String* param_name, bool allow_by_ref, bool allow_pointer))
    IL2CPP_REGISTER_METHODINFO(0x04794228, TypeUtils_ValidateType_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F991A0, bool, ValidateType_3, (app::Type * type, app::String* param_name, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474E2D0, TypeUtils_ValidateType_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F992D0, app::Assembly*, get_MsCorLib, ())
    IL2CPP_REGISTER_METHOD(0x01F993B0, bool, CanCache, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01F995A0, app::MethodInfo_1*, GetInvokeMethod, (app::Type * delegate_type))
} // namespace app::classes::System::Dynamic::Utils::TypeUtils
