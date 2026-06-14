#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParseRecord__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParseRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParseRecord__Fields_DEFINED)
#include <Modloader/app/structs/InternalArrayTypeE__Enum.h>
#include <Modloader/app/structs/InternalMemberTypeE__Enum.h>
#include <Modloader/app/structs/InternalMemberValueE__Enum.h>
#include <Modloader/app/structs/InternalObjectPositionE__Enum.h>
#include <Modloader/app/structs/InternalObjectTypeE__Enum.h>
#include <Modloader/app/structs/InternalParseTypeE__Enum.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#if defined(IL2CPP_STRUCT_InternalParseTypeE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalObjectTypeE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalArrayTypeE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalMemberTypeE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalMemberValueE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalObjectPositionE__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalPrimitiveTypeE__Enum_DEFINED)
#define IL2CPP_STRUCT_ParseRecord__Fields_DEFINED
struct String;
struct Object;
struct Type;
struct Int32__Array;
struct ReadObjectInfo;
struct Object__Array;
struct PrimitiveArray;
struct SerializationInfo;
struct __declspec(align(8)) ParseRecord__Fields {
    InternalParseTypeE__Enum PRparseTypeEnum;

    InternalObjectTypeE__Enum PRobjectTypeEnum;

    InternalArrayTypeE__Enum PRarrayTypeEnum;

    InternalMemberTypeE__Enum PRmemberTypeEnum;

    InternalMemberValueE__Enum PRmemberValueEnum;

    InternalObjectPositionE__Enum PRobjectPositionEnum;

    struct String* PRname;
    struct String* PRvalue;
    struct Object* PRvarValue;
    struct String* PRkeyDt;
    struct Type* PRdtType;
    InternalPrimitiveTypeE__Enum PRdtTypeCode;

    bool PRisEnum;
    int64_t PRobjectId;
    int64_t PRidRef;
    struct String* PRarrayElementTypeString;
    struct Type* PRarrayElementType;
    bool PRisArrayVariant;
    InternalPrimitiveTypeE__Enum PRarrayElementTypeCode;

    int32_t PRrank;
    struct Int32__Array* PRlengthA;
    struct Int32__Array* PRpositionA;
    struct Int32__Array* PRlowerBoundA;
    struct Int32__Array* PRupperBoundA;
    struct Int32__Array* PRindexMap;
    int32_t PRmemberIndex;
    int32_t PRlinearlength;
    struct Int32__Array* PRrectangularMap;
    bool PRisLowerBound;
    int64_t PRtopId;
    int64_t PRheaderId;
    struct ReadObjectInfo* PRobjectInfo;
    bool PRisValueTypeFixup;
    struct Object* PRnewObj;
    struct Object__Array* PRobjectA;
    struct PrimitiveArray* PRprimitiveArray;
    bool PRisRegistered;
    struct Object__Array* PRmemberData;
    struct SerializationInfo* PRsi;
    int32_t PRnullCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParseRecord__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParseRecord__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PrimitiveArray.h>
#include <Modloader/app/structs/ReadObjectInfo.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ParseRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParseRecord__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParseRecord__Fields_FWDDECL)
#include <Modloader/app/structs/ParseRecord__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParseRecord__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
