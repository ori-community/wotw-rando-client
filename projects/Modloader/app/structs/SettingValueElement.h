#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingValueElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingValueElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingValueElement_DEFINED)
#define IL2CPP_STRUCT_SettingValueElement_DEFINED
struct SettingValueElement__Class;
struct SettingValueElement {
    struct SettingValueElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingValueElement_FWDDECL)
#define IL2CPP_STRUCT_SettingValueElement_FWDDECL
#include <Modloader/app/structs/SettingValueElement__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingValueElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingValueElement_DEFINED) && !defined(IL2CPP_STRUCT_SettingValueElement_FWDDECL)
#include <Modloader/app/structs/SettingValueElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingValueElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
