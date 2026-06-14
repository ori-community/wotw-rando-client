#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenariosRecorder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenariosRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosRecorder_DEFINED)
#include <Modloader/app/structs/ScenariosRecorder__Fields.h>
#if defined(IL2CPP_STRUCT_ScenariosRecorder__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenariosRecorder_DEFINED
struct ScenariosRecorder__Class;
struct ScenariosRecorder {
    struct ScenariosRecorder__Class* klass;
    MonitorData* monitor;
    struct ScenariosRecorder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenariosRecorder_FWDDECL)
#define IL2CPP_STRUCT_ScenariosRecorder_FWDDECL
#include <Modloader/app/structs/ScenariosRecorder__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenariosRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosRecorder_DEFINED) && !defined(IL2CPP_STRUCT_ScenariosRecorder_FWDDECL)
#include <Modloader/app/structs/ScenariosRecorder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenariosRecorder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
