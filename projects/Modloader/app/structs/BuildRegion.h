#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildRegion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildRegion_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegion_DEFINED)
#include <Modloader/app/structs/BuildRegion__Fields.h>
#if defined(IL2CPP_STRUCT_BuildRegion__Fields_DEFINED)
#define IL2CPP_STRUCT_BuildRegion_DEFINED
struct BuildRegion__Class;
struct BuildRegion {
    struct BuildRegion__Class* klass;
    MonitorData* monitor;
    struct BuildRegion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildRegion_FWDDECL)
#define IL2CPP_STRUCT_BuildRegion_FWDDECL
#include <Modloader/app/structs/BuildRegion__Class.h>
#endif
#undef IL2CPP_STRUCT_BuildRegion_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildRegion_DEFINED) && !defined(IL2CPP_STRUCT_BuildRegion_FWDDECL)
#include <Modloader/app/structs/BuildRegion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildRegion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
