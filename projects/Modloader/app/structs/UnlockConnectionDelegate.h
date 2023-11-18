#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlockConnectionDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlockConnectionDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockConnectionDelegate_DEFINED)
#include <Modloader/app/structs/UnlockConnectionDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_UnlockConnectionDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlockConnectionDelegate_DEFINED
struct UnlockConnectionDelegate__Class;
struct UnlockConnectionDelegate {
    struct UnlockConnectionDelegate__Class* klass;
    MonitorData* monitor;
    struct UnlockConnectionDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlockConnectionDelegate_FWDDECL)
#define IL2CPP_STRUCT_UnlockConnectionDelegate_FWDDECL
#include <Modloader/app/structs/UnlockConnectionDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlockConnectionDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockConnectionDelegate_DEFINED) && !defined(IL2CPP_STRUCT_UnlockConnectionDelegate_FWDDECL)
#include <Modloader/app/structs/UnlockConnectionDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlockConnectionDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
