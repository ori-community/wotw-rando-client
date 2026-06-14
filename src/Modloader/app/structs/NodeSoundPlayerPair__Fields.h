#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_DEFINED)
#define IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_DEFINED
struct String;
struct Varying2DSoundProvider;
struct __declspec(align(8)) NodeSoundPlayerPair__Fields {
    struct String* NodeName;
    struct Varying2DSoundProvider* SoundProvider;
};
#endif
#if !defined(IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_FWDDECL)
#include <Modloader/app/structs/NodeSoundPlayerPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NodeSoundPlayerPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
