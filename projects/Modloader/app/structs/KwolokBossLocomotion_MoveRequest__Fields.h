#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest_RequestState__Enum.h>
#if defined(IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest_RequestState__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_DEFINED
struct String;
struct __declspec(align(8)) KwolokBossLocomotion_MoveRequest__Fields {
    float Target;
    KwolokBossLocomotion_MoveRequest_RequestState__Enum State;

    struct String* DebugName;
    float TimeElapsed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossLocomotion_MoveRequest__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
