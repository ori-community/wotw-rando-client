#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildRegionParams_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildRegionParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegionParams_DEFINED)
#include <Modloader/app/structs/BuildRegionParams__Fields.h>
#if defined(IL2CPP_STRUCT_BuildRegionParams__Fields_DEFINED)
#define IL2CPP_STRUCT_BuildRegionParams_DEFINED
struct BuildRegionParams__Class;
struct BuildRegionParams {
    struct BuildRegionParams__Class* klass;
    MonitorData* monitor;
    struct BuildRegionParams__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildRegionParams_FWDDECL)
#define IL2CPP_STRUCT_BuildRegionParams_FWDDECL
#include <Modloader/app/structs/BuildRegionParams__Class.h>
#endif
#undef IL2CPP_STRUCT_BuildRegionParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegionParams_DEFINED) && !defined(IL2CPP_STRUCT_BuildRegionParams_FWDDECL)
#include <Modloader/app/structs/BuildRegionParams.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildRegionParams.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
