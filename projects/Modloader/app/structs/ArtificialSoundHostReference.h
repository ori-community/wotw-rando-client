#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtificialSoundHostReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtificialSoundHostReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED)
#define IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED
struct ArtificialSoundHost;
struct ArtificialSoundHostReference {
    struct ArtificialSoundHost* Host;
    int32_t Version;
};
#endif
#if !defined(IL2CPP_STRUCT_ArtificialSoundHostReference_FWDDECL)
#define IL2CPP_STRUCT_ArtificialSoundHostReference_FWDDECL
#include <Modloader/app/structs/ArtificialSoundHost.h>
#endif
#undef IL2CPP_STRUCT_ArtificialSoundHostReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED) && !defined(IL2CPP_STRUCT_ArtificialSoundHostReference_FWDDECL)
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
