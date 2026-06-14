#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayData_DEFINED)
#include <Modloader/app/structs/ReplayData__Fields.h>
#if defined(IL2CPP_STRUCT_ReplayData__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayData_DEFINED
struct ReplayData__Class;
struct ReplayData {
    struct ReplayData__Class* klass;
    MonitorData* monitor;
    struct ReplayData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayData_FWDDECL)
#define IL2CPP_STRUCT_ReplayData_FWDDECL
#include <Modloader/app/structs/ReplayData__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayData_DEFINED) && !defined(IL2CPP_STRUCT_ReplayData_FWDDECL)
#include <Modloader/app/structs/ReplayData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
