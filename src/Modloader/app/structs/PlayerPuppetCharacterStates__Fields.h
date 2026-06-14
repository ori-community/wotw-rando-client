#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_DEFINED
struct Dictionary_2_System_Int32_System_Boolean_;
struct PlayerPuppetCharacterStates__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_System_Int32_System_Boolean_* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPuppetCharacterStates__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerPuppetCharacterStates__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPuppetCharacterStates__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
