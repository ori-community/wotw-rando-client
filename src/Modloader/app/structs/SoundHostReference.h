#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundHostReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundHostReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHostReference_DEFINED)
#define IL2CPP_STRUCT_SoundHostReference_DEFINED
struct ISoundHost;
struct SoundHostReference {
    struct ISoundHost* Host;
    int32_t Version;
    bool IsBound;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundHostReference_FWDDECL)
#define IL2CPP_STRUCT_SoundHostReference_FWDDECL
#include <Modloader/app/structs/ISoundHost.h>
#endif
#undef IL2CPP_STRUCT_SoundHostReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHostReference_DEFINED) && !defined(IL2CPP_STRUCT_SoundHostReference_FWDDECL)
#include <Modloader/app/structs/SoundHostReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundHostReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
