#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizer__StaticFields_DEFINED
struct String;
struct Sample;
struct ArtOptimizer__StaticFields {
    struct String* CurrentTaskDescription;
    float CurrentProgress;
    struct Sample* CurrentSample;
    bool _IsStopped_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizer__StaticFields_FWDDECL
#include <Modloader/app/structs/Sample.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizer__StaticFields_FWDDECL)
#include <Modloader/app/structs/ArtOptimizer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
