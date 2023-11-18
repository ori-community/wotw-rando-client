#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputTracking_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTracking_DEFINED)
#define IL2CPP_STRUCT_InputTracking_DEFINED
struct InputTracking__Class;
struct InputTracking {
    struct InputTracking__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InputTracking_FWDDECL)
#define IL2CPP_STRUCT_InputTracking_FWDDECL
#include <Modloader/app/structs/InputTracking__Class.h>
#endif
#undef IL2CPP_STRUCT_InputTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTracking_DEFINED) && !defined(IL2CPP_STRUCT_InputTracking_FWDDECL)
#include <Modloader/app/structs/InputTracking.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputTracking.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
