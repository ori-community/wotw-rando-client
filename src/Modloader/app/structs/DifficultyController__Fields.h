#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DifficultyController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DifficultyController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyController__Fields_DEFINED)
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_DifficultyController__Fields_DEFINED
struct Action;
struct DifficultyController__Fields {
    struct SaveSerialize__Fields _;
    DifficultyMode__Enum Difficulty;

    DifficultyMode__Enum LowestDifficulty;

    struct Action* OnDifficultyChanged;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DifficultyController__Fields_FWDDECL)
#define IL2CPP_STRUCT_DifficultyController__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_DifficultyController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DifficultyController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DifficultyController__Fields_FWDDECL)
#include <Modloader/app/structs/DifficultyController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DifficultyController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
