#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED
struct TentacleEnemy;
struct TentacleEnemy_WiggleData;
struct __declspec(align(8)) TentacleEnemy_TentacleState__Fields {
    struct TentacleEnemy* Tentacle;
    bool Enabled;
    struct TentacleEnemy_WiggleData* WiggleSettings;
    struct TentacleEnemy_WiggleData* m_modifiedWiggleSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_FWDDECL
#include <Modloader/app/structs/TentacleEnemy.h>
#include <Modloader/app/structs/TentacleEnemy_WiggleData.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
