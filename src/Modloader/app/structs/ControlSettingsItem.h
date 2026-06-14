#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlSettingsItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlSettingsItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlSettingsItem_DEFINED)
#include <Modloader/app/structs/ControlSettingsItem__Fields.h>
#if defined(IL2CPP_STRUCT_ControlSettingsItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlSettingsItem_DEFINED
struct ControlSettingsItem__Class;
struct ControlSettingsItem {
    struct ControlSettingsItem__Class* klass;
    MonitorData* monitor;
    struct ControlSettingsItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlSettingsItem_FWDDECL)
#define IL2CPP_STRUCT_ControlSettingsItem_FWDDECL
#include <Modloader/app/structs/ControlSettingsItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ControlSettingsItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlSettingsItem_DEFINED) && !defined(IL2CPP_STRUCT_ControlSettingsItem_FWDDECL)
#include <Modloader/app/structs/ControlSettingsItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlSettingsItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
