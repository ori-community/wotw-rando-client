#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_DEFINED)
#include <Modloader/app/structs/MessageProvider__Fields.h>
#if defined(IL2CPP_STRUCT_MessageProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_DEFINED
struct MessageProvider;
struct DifficultyModeMessageProvider__Fields {
    struct MessageProvider__Fields _;
    struct MessageProvider* Easy;
    struct MessageProvider* Normal;
    struct MessageProvider* Hard;
    struct MessageProvider* OneLife;
    struct MessageProvider* Difficulty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DifficultyModeMessageProvider__Fields_FWDDECL)
#include <Modloader/app/structs/DifficultyModeMessageProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DifficultyModeMessageProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
