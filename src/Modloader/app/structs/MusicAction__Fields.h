#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/MusicAction_MusicCommand__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_MusicAction_MusicCommand__Enum_DEFINED)
#define IL2CPP_STRUCT_MusicAction__Fields_DEFINED
struct MusicSource;
struct MusicAction__Fields {
    struct ActionMethod__Fields _;
    struct MusicSource* Music;
    MusicAction_MusicCommand__Enum Command;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_MusicAction__Fields_FWDDECL
#include <Modloader/app/structs/MusicSource.h>
#endif
#undef IL2CPP_STRUCT_MusicAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MusicAction__Fields_FWDDECL)
#include <Modloader/app/structs/MusicAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
