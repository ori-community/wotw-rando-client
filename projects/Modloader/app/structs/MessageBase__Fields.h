#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBase__Fields_DEFINED)
#include <Modloader/app/structs/NtlmFlags__Enum.h>
#if defined(IL2CPP_STRUCT_NtlmFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_MessageBase__Fields_DEFINED
struct __declspec(align(8)) MessageBase__Fields {
    int32_t _type;
    NtlmFlags__Enum _flags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageBase__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MessageBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageBase__Fields_FWDDECL)
#include <Modloader/app/structs/MessageBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
