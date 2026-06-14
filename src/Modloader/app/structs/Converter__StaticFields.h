#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Converter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Converter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Converter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Converter__StaticFields_DEFINED
struct Type__Array;
struct String__Array;
struct TypeCode__Enum__Array;
struct InternalPrimitiveTypeE__Enum__Array;
struct Type;
struct Assembly;
struct String;
struct Converter__StaticFields {
    int32_t primitiveTypeEnumLength;
    struct Type__Array* typeA;
    struct Type__Array* arrayTypeA;
    struct String__Array* valueA;
    struct TypeCode__Enum__Array* typeCodeA;
    struct InternalPrimitiveTypeE__Enum__Array* codeA;
    struct Type* typeofISerializable;
    struct Type* typeofString;
    struct Type* typeofConverter;
    struct Type* typeofBoolean;
    struct Type* typeofByte;
    struct Type* typeofChar;
    struct Type* typeofDecimal;
    struct Type* typeofDouble;
    struct Type* typeofInt16;
    struct Type* typeofInt32;
    struct Type* typeofInt64;
    struct Type* typeofSByte;
    struct Type* typeofSingle;
    struct Type* typeofTimeSpan;
    struct Type* typeofDateTime;
    struct Type* typeofUInt16;
    struct Type* typeofUInt32;
    struct Type* typeofUInt64;
    struct Type* typeofObject;
    struct Type* typeofSystemVoid;
    struct Assembly* urtAssembly;
    struct String* urtAssemblyString;
    struct Type* typeofTypeArray;
    struct Type* typeofObjectArray;
    struct Type* typeofStringArray;
    struct Type* typeofBooleanArray;
    struct Type* typeofByteArray;
    struct Type* typeofCharArray;
    struct Type* typeofDecimalArray;
    struct Type* typeofDoubleArray;
    struct Type* typeofInt16Array;
    struct Type* typeofInt32Array;
    struct Type* typeofInt64Array;
    struct Type* typeofSByteArray;
    struct Type* typeofSingleArray;
    struct Type* typeofTimeSpanArray;
    struct Type* typeofDateTimeArray;
    struct Type* typeofUInt16Array;
    struct Type* typeofUInt32Array;
    struct Type* typeofUInt64Array;
    struct Type* typeofMarshalByRefObject;
};
#endif
#if !defined(IL2CPP_STRUCT_Converter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Converter__StaticFields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum__Array.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_Converter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Converter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Converter__StaticFields_FWDDECL)
#include <Modloader/app/structs/Converter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Converter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
