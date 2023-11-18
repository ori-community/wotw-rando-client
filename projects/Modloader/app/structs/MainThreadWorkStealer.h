#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadWorkStealer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadWorkStealer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadWorkStealer_DEFINED)
#define IL2CPP_STRUCT_MainThreadWorkStealer_DEFINED
struct MainThreadWorkStealer__Class;
struct MainThreadWorkStealer {
    struct MainThreadWorkStealer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MainThreadWorkStealer_FWDDECL)
#define IL2CPP_STRUCT_MainThreadWorkStealer_FWDDECL
#include <Modloader/app/structs/MainThreadWorkStealer__Class.h>
#endif
#undef IL2CPP_STRUCT_MainThreadWorkStealer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadWorkStealer_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadWorkStealer_FWDDECL)
#include <Modloader/app/structs/MainThreadWorkStealer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadWorkStealer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
