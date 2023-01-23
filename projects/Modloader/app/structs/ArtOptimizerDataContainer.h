#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizerDataContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizerDataContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerDataContainer_DEFINED)
#include <Modloader/app/structs/ArtOptimizerDataContainer__Fields.h>
#if defined(IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizerDataContainer_DEFINED
struct ArtOptimizerDataContainer__Class;
struct ArtOptimizerDataContainer {
    struct ArtOptimizerDataContainer__Class* klass;
    MonitorData* monitor;
    struct ArtOptimizerDataContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizerDataContainer_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizerDataContainer_FWDDECL
#include <Modloader/app/structs/ArtOptimizerDataContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizerDataContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerDataContainer_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizerDataContainer_FWDDECL)
#include <Modloader/app/structs/ArtOptimizerDataContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizerDataContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
