#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_DEFINED
struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_;
struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket_;
struct IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_;
struct __declspec(align(8)) Vitals_DamageProcessHelper__Fields {
    struct List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* m_sortedDamageEntries;
    struct List_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* m_damageBucketPerID;
    struct IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* m_damageDistanceComparer;
};
#endif
#if !defined(IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_FWDDECL
#include <Modloader/app/structs/IComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_.h>
#include <Modloader/app/structs/List_1_Moon_Vitals_DamageProcessHelper_DamageBucket_.h>
#include <Modloader/app/structs/List_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_.h>
#endif
#undef IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Vitals_DamageProcessHelper__Fields_FWDDECL)
#include <Modloader/app/structs/Vitals_DamageProcessHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vitals_DamageProcessHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
