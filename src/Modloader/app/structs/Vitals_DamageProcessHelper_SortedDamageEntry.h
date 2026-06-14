#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_DEFINED)
#define IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_DEFINED
struct DamageReceiver;
struct DamageReceiver_DamageEntry;
struct Vitals_DamageProcessHelper_SortedDamageEntry {
    struct DamageReceiver* receiver;
    struct DamageReceiver_DamageEntry* damageEntry;
    float dist;
};
#endif
#if !defined(IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_FWDDECL)
#define IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_FWDDECL
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/DamageReceiver_DamageEntry.h>
#endif
#undef IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_DEFINED) && !defined(IL2CPP_STRUCT_Vitals_DamageProcessHelper_SortedDamageEntry_FWDDECL)
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
