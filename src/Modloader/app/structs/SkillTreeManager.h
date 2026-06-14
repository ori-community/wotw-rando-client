#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillTreeManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillTreeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillTreeManager_DEFINED)
#include <Modloader/app/structs/SkillTreeManager__Fields.h>
#if defined(IL2CPP_STRUCT_SkillTreeManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SkillTreeManager_DEFINED
struct SkillTreeManager__Class;
struct SkillTreeManager {
    struct SkillTreeManager__Class* klass;
    MonitorData* monitor;
    struct SkillTreeManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillTreeManager_FWDDECL)
#define IL2CPP_STRUCT_SkillTreeManager_FWDDECL
#include <Modloader/app/structs/SkillTreeManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SkillTreeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillTreeManager_DEFINED) && !defined(IL2CPP_STRUCT_SkillTreeManager_FWDDECL)
#include <Modloader/app/structs/SkillTreeManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillTreeManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
