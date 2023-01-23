#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizer_DEFINED)
#include <Modloader/app/structs/ArtOptimizer__Fields.h>
#if defined(IL2CPP_STRUCT_ArtOptimizer__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizer_DEFINED
struct ArtOptimizer__Class;
struct ArtOptimizer {
    struct ArtOptimizer__Class* klass;
    MonitorData* monitor;
    struct ArtOptimizer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizer_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizer_FWDDECL
#include <Modloader/app/structs/ArtOptimizer__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizer_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizer_FWDDECL)
#include <Modloader/app/structs/ArtOptimizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
