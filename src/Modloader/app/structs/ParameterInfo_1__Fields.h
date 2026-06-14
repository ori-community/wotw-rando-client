#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterInfo_1__Fields_DEFINED)
#include <Modloader/app/structs/ParameterAttributes__Enum.h>
#if defined(IL2CPP_STRUCT_ParameterAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_ParameterInfo_1__Fields_DEFINED
struct Type;
struct Object;
struct MemberInfo_1;
struct String;
struct MarshalAsAttribute;
struct __declspec(align(8)) ParameterInfo_1__Fields {
    struct Type* ClassImpl;
    struct Object* DefaultValueImpl;
    struct MemberInfo_1* MemberImpl;
    struct String* NameImpl;
    int32_t PositionImpl;
    ParameterAttributes__Enum AttrsImpl;

    struct MarshalAsAttribute* marshalAs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParameterInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParameterInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/MarshalAsAttribute.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ParameterInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParameterInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/ParameterInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
