#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceData_DEFINED)
#include <Modloader/app/structs/RaceData__Fields.h>
#if defined(IL2CPP_STRUCT_RaceData__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceData_DEFINED
struct RaceData__Class;
struct RaceData {
    struct RaceData__Class* klass;
    MonitorData* monitor;
    struct RaceData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceData_FWDDECL)
#define IL2CPP_STRUCT_RaceData_FWDDECL
#include <Modloader/app/structs/RaceData__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceData_DEFINED) && !defined(IL2CPP_STRUCT_RaceData_FWDDECL)
#include <Modloader/app/structs/RaceData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
