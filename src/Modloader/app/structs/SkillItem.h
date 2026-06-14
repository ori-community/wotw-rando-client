#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillItem_DEFINED)
#include <Modloader/app/structs/SkillItem__Fields.h>
#if defined(IL2CPP_STRUCT_SkillItem__Fields_DEFINED)
#define IL2CPP_STRUCT_SkillItem_DEFINED
struct SkillItem__Class;
struct SkillItem {
    struct SkillItem__Class* klass;
    MonitorData* monitor;
    struct SkillItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillItem_FWDDECL)
#define IL2CPP_STRUCT_SkillItem_FWDDECL
#include <Modloader/app/structs/SkillItem__Class.h>
#endif
#undef IL2CPP_STRUCT_SkillItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillItem_DEFINED) && !defined(IL2CPP_STRUCT_SkillItem_FWDDECL)
#include <Modloader/app/structs/SkillItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
