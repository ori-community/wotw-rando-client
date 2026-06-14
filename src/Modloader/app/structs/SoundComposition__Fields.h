#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundComposition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundComposition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundComposition__Fields_DEFINED
struct List_1_SoundComposition_SoundLoop_;
struct List_1_SoundComposition_SoundLayer_;
struct SoundComposition__Fields {
    struct ScriptableObject__Fields _;
    int32_t LoopCount;
    float LoopDuration;
    struct List_1_SoundComposition_SoundLoop_* Loops;
    struct List_1_SoundComposition_SoundLayer_* Layers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundComposition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundComposition__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SoundComposition_SoundLayer_.h>
#include <Modloader/app/structs/List_1_SoundComposition_SoundLoop_.h>
#endif
#undef IL2CPP_STRUCT_SoundComposition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundComposition__Fields_FWDDECL)
#include <Modloader/app/structs/SoundComposition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundComposition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
