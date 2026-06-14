#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ambience__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ambience__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Ambience__StaticFields_DEFINED
struct List_1_Core_Ambience_Layer_;
struct List_1_Core_Ambience_AmbienceTrack_;
struct Ambience__StaticFields {
    struct List_1_Core_Ambience_Layer_* m_ambienceLayers;
    struct List_1_Core_Ambience_AmbienceTrack_* CurrentTracks;
    bool Mute;
};
#endif
#if !defined(IL2CPP_STRUCT_Ambience__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Ambience__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Core_Ambience_AmbienceTrack_.h>
#include <Modloader/app/structs/List_1_Core_Ambience_Layer_.h>
#endif
#undef IL2CPP_STRUCT_Ambience__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Ambience__StaticFields_FWDDECL)
#include <Modloader/app/structs/Ambience__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ambience__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
