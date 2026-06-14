#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingAttribute_DEFINED)
#define IL2CPP_STRUCT_SettingAttribute_DEFINED
struct SettingAttribute__Class;
struct SettingAttribute {
    struct SettingAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingAttribute_FWDDECL)
#define IL2CPP_STRUCT_SettingAttribute_FWDDECL
#include <Modloader/app/structs/SettingAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SettingAttribute_FWDDECL)
#include <Modloader/app/structs/SettingAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
