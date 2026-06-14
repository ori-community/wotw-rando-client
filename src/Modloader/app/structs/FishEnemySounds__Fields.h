#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemySounds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemySounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemySounds__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemySounds__Fields_DEFINED
struct SoundSource;
struct SoundProvider;
struct __declspec(align(8)) FishEnemySounds__Fields {
    struct SoundSource* Swim;
    struct SoundProvider* Alert;
    struct SoundSource* Bite;
    struct SoundSource* Flop;
    struct SoundSource* EnterWater;
    struct SoundSource* ExitWater;
};
#endif
#if !defined(IL2CPP_STRUCT_FishEnemySounds__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishEnemySounds__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_FishEnemySounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemySounds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemySounds__Fields_FWDDECL)
#include <Modloader/app/structs/FishEnemySounds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemySounds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
