#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_DEFINED
struct List_1_CharacterPlatformMovement_;
struct List_1_EnemyPlatformMovement_;
struct CharacterPlatformMovement__Array;
struct Boolean__Array;
struct CharacterPlatformMovementManager_LateFrameUpdater;
struct __declspec(align(8)) CharacterPlatformMovementManager__Fields {
    struct List_1_CharacterPlatformMovement_* m_platformMovements;
    struct List_1_EnemyPlatformMovement_* m_lateUpdateMovements;
    struct CharacterPlatformMovement__Array* m_toUpdate;
    struct Boolean__Array* m_shouldContinueUpdate;
    struct CharacterPlatformMovementManager_LateFrameUpdater* m_lateFrameUpdater;
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/CharacterPlatformMovementManager_LateFrameUpdater.h>
#include <Modloader/app/structs/CharacterPlatformMovement__Array.h>
#include <Modloader/app/structs/List_1_CharacterPlatformMovement_.h>
#include <Modloader/app/structs/List_1_EnemyPlatformMovement_.h>
#endif
#undef IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterPlatformMovementManager__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterPlatformMovementManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterPlatformMovementManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
