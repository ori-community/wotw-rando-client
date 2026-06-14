#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_DEFINED)
#include <Modloader/app/structs/UnmanagedMemoryStream__Fields.h>
#if defined(IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_DEFINED)
#define IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_DEFINED
struct Module;
struct Assembly_UnmanagedMemoryStreamForModule__Fields {
    struct UnmanagedMemoryStream__Fields _;
    struct Module* module;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_FWDDECL)
#define IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_FWDDECL
#include <Modloader/app/structs/Module.h>
#endif
#undef IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Assembly_UnmanagedMemoryStreamForModule__Fields_FWDDECL)
#include <Modloader/app/structs/Assembly_UnmanagedMemoryStreamForModule__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Assembly_UnmanagedMemoryStreamForModule__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
