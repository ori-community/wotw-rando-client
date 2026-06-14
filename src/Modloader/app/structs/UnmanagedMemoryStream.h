#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnmanagedMemoryStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnmanagedMemoryStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedMemoryStream_DEFINED)
#include <Modloader/app/structs/UnmanagedMemoryStream__Fields.h>
#if defined(IL2CPP_STRUCT_UnmanagedMemoryStream__Fields_DEFINED)
#define IL2CPP_STRUCT_UnmanagedMemoryStream_DEFINED
struct UnmanagedMemoryStream__Class;
struct UnmanagedMemoryStream {
    struct UnmanagedMemoryStream__Class* klass;
    MonitorData* monitor;
    struct UnmanagedMemoryStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnmanagedMemoryStream_FWDDECL)
#define IL2CPP_STRUCT_UnmanagedMemoryStream_FWDDECL
#include <Modloader/app/structs/UnmanagedMemoryStream__Class.h>
#endif
#undef IL2CPP_STRUCT_UnmanagedMemoryStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedMemoryStream_DEFINED) && !defined(IL2CPP_STRUCT_UnmanagedMemoryStream_FWDDECL)
#include <Modloader/app/structs/UnmanagedMemoryStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnmanagedMemoryStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
