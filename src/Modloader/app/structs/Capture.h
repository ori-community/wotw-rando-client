#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Capture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Capture_INITIALIZING
#if !defined(IL2CPP_STRUCT_Capture_DEFINED)
#include <Modloader/app/structs/Capture__Fields.h>
#if defined(IL2CPP_STRUCT_Capture__Fields_DEFINED)
#define IL2CPP_STRUCT_Capture_DEFINED
struct Capture__Class;
struct Capture {
    struct Capture__Class* klass;
    MonitorData* monitor;
    struct Capture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Capture_FWDDECL)
#define IL2CPP_STRUCT_Capture_FWDDECL
#include <Modloader/app/structs/Capture__Class.h>
#endif
#undef IL2CPP_STRUCT_Capture_INITIALIZING
#if !defined(IL2CPP_STRUCT_Capture_DEFINED) && !defined(IL2CPP_STRUCT_Capture_FWDDECL)
#include <Modloader/app/structs/Capture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Capture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
