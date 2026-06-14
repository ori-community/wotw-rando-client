#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_DEFINED
struct DamageDealer;
struct Polygon_1;
struct __declspec(align(8)) AutoDamageCollider_AutoDamageColliderEntry__Fields {
    struct DamageDealer* DamageDealer;
    struct Polygon_1* Polygon;
};
#endif
#if !defined(IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/Polygon_1.h>
#endif
#undef IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AutoDamageCollider_AutoDamageColliderEntry__Fields_FWDDECL)
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageColliderEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageColliderEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
