#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinCutsceneBlocked_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinCutsceneBlocked_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_DEFINED
struct SeinCutsceneBlocked__Fields {
    struct CharacterState__Fields _;
    SeinCutsceneBlocked_State__Enum CurrentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinCutsceneBlocked__Fields_FWDDECL)
#include <Modloader/app/structs/SeinCutsceneBlocked__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCutsceneBlocked__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
