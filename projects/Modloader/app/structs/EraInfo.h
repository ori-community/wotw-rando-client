#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EraInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EraInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EraInfo_DEFINED)
#include <Modloader/app/structs/EraInfo__Fields.h>
#if defined(IL2CPP_STRUCT_EraInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_EraInfo_DEFINED
struct EraInfo__Class;
struct EraInfo {
    struct EraInfo__Class* klass;
    MonitorData* monitor;
    struct EraInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EraInfo_FWDDECL)
#define IL2CPP_STRUCT_EraInfo_FWDDECL
#include <Modloader/app/structs/EraInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_EraInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EraInfo_DEFINED) && !defined(IL2CPP_STRUCT_EraInfo_FWDDECL)
#include <Modloader/app/structs/EraInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EraInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
