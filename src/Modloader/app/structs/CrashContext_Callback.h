#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrashContext_Callback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrashContext_Callback_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_Callback_DEFINED)
#define IL2CPP_STRUCT_CrashContext_Callback_DEFINED
struct CrashContext_Callback__Class;
struct CrashContext_Callback {
    struct CrashContext_Callback__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CrashContext_Callback_FWDDECL)
#define IL2CPP_STRUCT_CrashContext_Callback_FWDDECL
#include <Modloader/app/structs/CrashContext_Callback__Class.h>
#endif
#undef IL2CPP_STRUCT_CrashContext_Callback_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_Callback_DEFINED) && !defined(IL2CPP_STRUCT_CrashContext_Callback_FWDDECL)
#include <Modloader/app/structs/CrashContext_Callback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrashContext_Callback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
