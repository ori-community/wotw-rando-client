#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MailSettingsSectionGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MailSettingsSectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MailSettingsSectionGroup_DEFINED)
#define IL2CPP_STRUCT_MailSettingsSectionGroup_DEFINED
struct MailSettingsSectionGroup__Class;
struct MailSettingsSectionGroup {
    struct MailSettingsSectionGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MailSettingsSectionGroup_FWDDECL)
#define IL2CPP_STRUCT_MailSettingsSectionGroup_FWDDECL
#include <Modloader/app/structs/MailSettingsSectionGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_MailSettingsSectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MailSettingsSectionGroup_DEFINED) && !defined(IL2CPP_STRUCT_MailSettingsSectionGroup_FWDDECL)
#include <Modloader/app/structs/MailSettingsSectionGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MailSettingsSectionGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
