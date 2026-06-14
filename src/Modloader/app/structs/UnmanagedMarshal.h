#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnmanagedMarshal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnmanagedMarshal_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedMarshal_DEFINED)
#define IL2CPP_STRUCT_UnmanagedMarshal_DEFINED
struct UnmanagedMarshal__Class;
struct UnmanagedMarshal {
    struct UnmanagedMarshal__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnmanagedMarshal_FWDDECL)
#define IL2CPP_STRUCT_UnmanagedMarshal_FWDDECL
#include <Modloader/app/structs/UnmanagedMarshal__Class.h>
#endif
#undef IL2CPP_STRUCT_UnmanagedMarshal_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedMarshal_DEFINED) && !defined(IL2CPP_STRUCT_UnmanagedMarshal_FWDDECL)
#include <Modloader/app/structs/UnmanagedMarshal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnmanagedMarshal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
