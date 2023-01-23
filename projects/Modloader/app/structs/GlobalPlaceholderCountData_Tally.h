#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_DEFINED)
#include <Modloader/app/structs/ScreenshotIcon_EnemyType__Enum.h>
#if defined(IL2CPP_STRUCT_ScreenshotIcon_EnemyType__Enum_DEFINED)
#define IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_DEFINED
struct Int32__Array;
struct GlobalPlaceholderCountData_Tally {
    ScreenshotIcon_EnemyType__Enum Icon;

    int32_t Count;
    struct Int32__Array* DifficultyCount;
    struct Int32__Array* ZoneCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_FWDDECL)
#define IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_DEFINED) && !defined(IL2CPP_STRUCT_GlobalPlaceholderCountData_Tally_FWDDECL)
#include <Modloader/app/structs/GlobalPlaceholderCountData_Tally.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalPlaceholderCountData_Tally.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
