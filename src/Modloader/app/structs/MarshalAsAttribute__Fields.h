#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarshalAsAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarshalAsAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalAsAttribute__Fields_DEFINED)
#include <Modloader/app/structs/UnmanagedType__Enum.h>
#include <Modloader/app/structs/VarEnum__Enum.h>
#if defined(IL2CPP_STRUCT_UnmanagedType__Enum_DEFINED) && defined(IL2CPP_STRUCT_VarEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_MarshalAsAttribute__Fields_DEFINED
struct String;
struct Type;
struct __declspec(align(8)) MarshalAsAttribute__Fields {
    struct String* MarshalCookie;
    struct String* MarshalType;
    struct Type* MarshalTypeRef;
    struct Type* SafeArrayUserDefinedSubType;
    UnmanagedType__Enum utype;

    UnmanagedType__Enum ArraySubType;

    VarEnum__Enum SafeArraySubType;

    int32_t SizeConst;
    int32_t IidParameterIndex;
    int16_t SizeParamIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MarshalAsAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_MarshalAsAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_MarshalAsAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalAsAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MarshalAsAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/MarshalAsAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarshalAsAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
