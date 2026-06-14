#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeDifficultyAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeDifficultyAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDifficultyAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ChangeDifficultyAction__Fields_DEFINED
struct ChangeDifficultyAction__Fields {
    struct ActionMethod__Fields _;
    DifficultyMode__Enum Difficulty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeDifficultyAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChangeDifficultyAction__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ChangeDifficultyAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDifficultyAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChangeDifficultyAction__Fields_FWDDECL)
#include <Modloader/app/structs/ChangeDifficultyAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeDifficultyAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
