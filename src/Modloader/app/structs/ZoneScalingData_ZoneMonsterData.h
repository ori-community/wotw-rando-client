#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_DEFINED)
#define IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_DEFINED
struct EntityPlaceholderScalingData;
struct ZoneScalingData_ZoneMonsterData {
    struct EntityPlaceholderScalingData* Enemy;
    int32_t DifficultyLevel;
};
#endif
#if !defined(IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_FWDDECL)
#define IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_FWDDECL
#include <Modloader/app/structs/EntityPlaceholderScalingData.h>
#endif
#undef IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_DEFINED) && !defined(IL2CPP_STRUCT_ZoneScalingData_ZoneMonsterData_FWDDECL)
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZoneScalingData_ZoneMonsterData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
