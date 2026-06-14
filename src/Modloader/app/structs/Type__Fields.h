#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Type__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Type__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type__Fields_DEFINED)
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeTypeHandle_DEFINED)
#define IL2CPP_STRUCT_Type__Fields_DEFINED
struct __declspec(align(8)) Type__Fields {
    struct RuntimeTypeHandle _impl;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Type__Fields_FWDDECL)
#define IL2CPP_STRUCT_Type__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Type__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Type__Fields_FWDDECL)
#include <Modloader/app/structs/Type__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Type__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
