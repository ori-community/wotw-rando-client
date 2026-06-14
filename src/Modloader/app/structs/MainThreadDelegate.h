#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadDelegate_DEFINED)
#include <Modloader/app/structs/MainThreadDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_MainThreadDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_MainThreadDelegate_DEFINED
struct MainThreadDelegate__Class;
struct MainThreadDelegate {
    struct MainThreadDelegate__Class* klass;
    MonitorData* monitor;
    struct MainThreadDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MainThreadDelegate_FWDDECL)
#define IL2CPP_STRUCT_MainThreadDelegate_FWDDECL
#include <Modloader/app/structs/MainThreadDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_MainThreadDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadDelegate_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadDelegate_FWDDECL)
#include <Modloader/app/structs/MainThreadDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
