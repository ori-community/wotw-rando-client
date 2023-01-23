#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsImpersonationContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsImpersonationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsImpersonationContext_DEFINED)
#include <Modloader/app/structs/WindowsImpersonationContext__Fields.h>
#if defined(IL2CPP_STRUCT_WindowsImpersonationContext__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowsImpersonationContext_DEFINED
struct WindowsImpersonationContext__Class;
struct WindowsImpersonationContext {
    struct WindowsImpersonationContext__Class* klass;
    MonitorData* monitor;
    struct WindowsImpersonationContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowsImpersonationContext_FWDDECL)
#define IL2CPP_STRUCT_WindowsImpersonationContext_FWDDECL
#include <Modloader/app/structs/WindowsImpersonationContext__Class.h>
#endif
#undef IL2CPP_STRUCT_WindowsImpersonationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsImpersonationContext_DEFINED) && !defined(IL2CPP_STRUCT_WindowsImpersonationContext_FWDDECL)
#include <Modloader/app/structs/WindowsImpersonationContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsImpersonationContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
