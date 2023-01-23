#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundComposition_SoundLayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundComposition_SoundLayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLayer_DEFINED)
#include <Modloader/app/structs/SoundComposition_SoundLayer__Fields.h>
#if defined(IL2CPP_STRUCT_SoundComposition_SoundLayer__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundComposition_SoundLayer_DEFINED
struct SoundComposition_SoundLayer__Class;
struct SoundComposition_SoundLayer {
    struct SoundComposition_SoundLayer__Class* klass;
    MonitorData* monitor;
    struct SoundComposition_SoundLayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLayer_FWDDECL)
#define IL2CPP_STRUCT_SoundComposition_SoundLayer_FWDDECL
#include <Modloader/app/structs/SoundComposition_SoundLayer__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundComposition_SoundLayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLayer_DEFINED) && !defined(IL2CPP_STRUCT_SoundComposition_SoundLayer_FWDDECL)
#include <Modloader/app/structs/SoundComposition_SoundLayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundComposition_SoundLayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
