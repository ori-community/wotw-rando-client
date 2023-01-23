#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSCounter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCounter_DEFINED)
#include <Modloader/app/structs/FPSCounter__Fields.h>
#if defined(IL2CPP_STRUCT_FPSCounter__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSCounter_DEFINED
struct FPSCounter__Class;
struct FPSCounter {
    struct FPSCounter__Class* klass;
    MonitorData* monitor;
    struct FPSCounter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSCounter_FWDDECL)
#define IL2CPP_STRUCT_FPSCounter_FWDDECL
#include <Modloader/app/structs/FPSCounter__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCounter_DEFINED) && !defined(IL2CPP_STRUCT_FPSCounter_FWDDECL)
#include <Modloader/app/structs/FPSCounter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSCounter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
