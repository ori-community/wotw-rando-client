#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizationDataModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizationDataModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizationDataModel_DEFINED)
#include <Modloader/app/structs/ArtOptimizationDataModel__Fields.h>
#if defined(IL2CPP_STRUCT_ArtOptimizationDataModel__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizationDataModel_DEFINED
struct ArtOptimizationDataModel__Class;
struct ArtOptimizationDataModel {
    struct ArtOptimizationDataModel__Class* klass;
    MonitorData* monitor;
    struct ArtOptimizationDataModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizationDataModel_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizationDataModel_FWDDECL
#include <Modloader/app/structs/ArtOptimizationDataModel__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizationDataModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizationDataModel_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizationDataModel_FWDDECL)
#include <Modloader/app/structs/ArtOptimizationDataModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizationDataModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
