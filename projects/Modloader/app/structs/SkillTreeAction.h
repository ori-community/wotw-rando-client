#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillTreeAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillTreeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillTreeAction_DEFINED)
#include <Modloader/app/structs/SkillTreeAction__Fields.h>
#if defined(IL2CPP_STRUCT_SkillTreeAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SkillTreeAction_DEFINED
struct SkillTreeAction__Class;
struct SkillTreeAction {
    struct SkillTreeAction__Class* klass;
    MonitorData* monitor;
    struct SkillTreeAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillTreeAction_FWDDECL)
#define IL2CPP_STRUCT_SkillTreeAction_FWDDECL
#include <Modloader/app/structs/SkillTreeAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SkillTreeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillTreeAction_DEFINED) && !defined(IL2CPP_STRUCT_SkillTreeAction_FWDDECL)
#include <Modloader/app/structs/SkillTreeAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillTreeAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
