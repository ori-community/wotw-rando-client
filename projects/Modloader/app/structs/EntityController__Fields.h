#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityController__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_EntityController__Fields_DEFINED
struct LegacyEntity;
struct Action_1_Damage_;
struct EntityController__Fields {
    struct SaveSerialize__Fields _;
    struct LegacyEntity* Entity;
    struct Action_1_Damage_* OnReceiveDamage;
    struct Vector3 _LastSeenSeinPosition_k__BackingField;
    bool m_nearSein;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityController__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityController__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/LegacyEntity.h>
#endif
#undef IL2CPP_STRUCT_EntityController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityController__Fields_FWDDECL)
#include <Modloader/app/structs/EntityController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
