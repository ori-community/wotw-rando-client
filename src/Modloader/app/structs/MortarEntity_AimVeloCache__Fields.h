#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_DEFINED
struct MortarEntity_AimVeloCache_Grid;
struct MortarEntity_AimVeloCache_Packer;
struct MortarEntity_AimVeloCache_EntityParams;
struct __declspec(align(8)) MortarEntity_AimVeloCache__Fields {
    struct Vector3 m_entityPos;
    struct MortarEntity_AimVeloCache_Grid* m_grid;
    struct MortarEntity_AimVeloCache_Packer* m_packer;
    struct MortarEntity_AimVeloCache_EntityParams* m_entity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_FWDDECL
#include <Modloader/app/structs/MortarEntity_AimVeloCache_EntityParams.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Grid.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Packer.h>
#endif
#undef IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache__Fields_FWDDECL)
#include <Modloader/app/structs/MortarEntity_AimVeloCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarEntity_AimVeloCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
