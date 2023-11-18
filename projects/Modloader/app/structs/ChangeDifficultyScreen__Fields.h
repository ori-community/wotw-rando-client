#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_DEFINED)
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_DEFINED
struct GameObject;
struct MessageProvider;
struct ChangeDifficultyScreen__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* ConfirmScreen;
    DifficultyMode__Enum m_selectedDifficulty;

    struct MessageProvider* Message;
    struct MessageProvider* Easy;
    struct MessageProvider* Normal;
    struct MessageProvider* Hard;
    struct MessageProvider* OneLife;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChangeDifficultyScreen__Fields_FWDDECL)
#include <Modloader/app/structs/ChangeDifficultyScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeDifficultyScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
