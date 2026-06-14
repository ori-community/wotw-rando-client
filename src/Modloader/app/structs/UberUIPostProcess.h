#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberUIPostProcess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberUIPostProcess_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberUIPostProcess_DEFINED)
#include <Modloader/app/structs/UberUIPostProcess__Fields.h>
#if defined(IL2CPP_STRUCT_UberUIPostProcess__Fields_DEFINED)
#define IL2CPP_STRUCT_UberUIPostProcess_DEFINED
struct UberUIPostProcess__Class;
struct UberUIPostProcess {
    struct UberUIPostProcess__Class* klass;
    MonitorData* monitor;
    struct UberUIPostProcess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberUIPostProcess_FWDDECL)
#define IL2CPP_STRUCT_UberUIPostProcess_FWDDECL
#include <Modloader/app/structs/UberUIPostProcess__Class.h>
#endif
#undef IL2CPP_STRUCT_UberUIPostProcess_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberUIPostProcess_DEFINED) && !defined(IL2CPP_STRUCT_UberUIPostProcess_FWDDECL)
#include <Modloader/app/structs/UberUIPostProcess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberUIPostProcess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
