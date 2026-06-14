#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionInfo_DEFINED)
#include <Modloader/app/structs/RegionInfo__Fields.h>
#if defined(IL2CPP_STRUCT_RegionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_RegionInfo_DEFINED
struct RegionInfo__Class;
struct RegionInfo {
    struct RegionInfo__Class* klass;
    MonitorData* monitor;
    struct RegionInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegionInfo_FWDDECL)
#define IL2CPP_STRUCT_RegionInfo_FWDDECL
#include <Modloader/app/structs/RegionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RegionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionInfo_DEFINED) && !defined(IL2CPP_STRUCT_RegionInfo_FWDDECL)
#include <Modloader/app/structs/RegionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
