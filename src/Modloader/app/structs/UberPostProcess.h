#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostProcess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostProcess_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcess_DEFINED)
#include <Modloader/app/structs/UberPostProcess__Fields.h>
#if defined(IL2CPP_STRUCT_UberPostProcess__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPostProcess_DEFINED
struct UberPostProcess__Class;
struct UberPostProcess {
    struct UberPostProcess__Class* klass;
    MonitorData* monitor;
    struct UberPostProcess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostProcess_FWDDECL)
#define IL2CPP_STRUCT_UberPostProcess_FWDDECL
#include <Modloader/app/structs/UberPostProcess__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPostProcess_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcess_DEFINED) && !defined(IL2CPP_STRUCT_UberPostProcess_FWDDECL)
#include <Modloader/app/structs/UberPostProcess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostProcess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
