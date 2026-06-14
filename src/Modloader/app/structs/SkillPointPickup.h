#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillPointPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillPointPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillPointPickup_DEFINED)
#include <Modloader/app/structs/SkillPointPickup__Fields.h>
#if defined(IL2CPP_STRUCT_SkillPointPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_SkillPointPickup_DEFINED
struct SkillPointPickup__Class;
struct SkillPointPickup {
    struct SkillPointPickup__Class* klass;
    MonitorData* monitor;
    struct SkillPointPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillPointPickup_FWDDECL)
#define IL2CPP_STRUCT_SkillPointPickup_FWDDECL
#include <Modloader/app/structs/SkillPointPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_SkillPointPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillPointPickup_DEFINED) && !defined(IL2CPP_STRUCT_SkillPointPickup_FWDDECL)
#include <Modloader/app/structs/SkillPointPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillPointPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
