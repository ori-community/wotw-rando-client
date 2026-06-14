#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_DEFINED
struct MortarEntity;
struct __declspec(align(8)) MortarEntity_AimVeloCache_EntityParams__Fields {
    struct MortarEntity* m_entity;
    struct Vector3 m_entityPosFromGeneration;
    struct Vector3 m_entityUpFromGeneration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_FWDDECL
#include <Modloader/app/structs/MortarEntity.h>
#endif
#undef IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_EntityParams__Fields_FWDDECL)
#include <Modloader/app/structs/MortarEntity_AimVeloCache_EntityParams__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarEntity_AimVeloCache_EntityParams__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
