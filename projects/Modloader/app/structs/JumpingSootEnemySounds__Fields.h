#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_DEFINED)
#define IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_DEFINED
struct SoundProvider;
struct SoundSource;
struct __declspec(align(8)) JumpingSootEnemySounds__Fields {
    struct SoundProvider* Charge;
    struct SoundProvider* Jump;
    struct SoundSource* Idle;
    struct SoundProvider* Impact;
    struct SoundProvider* Land;
    struct SoundSource* FallOnGround;
};
#endif
#if !defined(IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumpingSootEnemySounds__Fields_FWDDECL)
#include <Modloader/app/structs/JumpingSootEnemySounds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpingSootEnemySounds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
