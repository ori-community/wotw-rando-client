#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKTerrainPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKTerrainPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKTerrainPostprocess_DEFINED)
#include <Modloader/app/structs/IKTerrainPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_IKTerrainPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_IKTerrainPostprocess_DEFINED
struct IKTerrainPostprocess__Class;
struct IKTerrainPostprocess {
    struct IKTerrainPostprocess__Class* klass;
    MonitorData* monitor;
    struct IKTerrainPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKTerrainPostprocess_FWDDECL)
#define IL2CPP_STRUCT_IKTerrainPostprocess_FWDDECL
#include <Modloader/app/structs/IKTerrainPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_IKTerrainPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKTerrainPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_IKTerrainPostprocess_FWDDECL)
#include <Modloader/app/structs/IKTerrainPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKTerrainPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
