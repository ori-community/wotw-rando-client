#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingElement_DEFINED)
#define IL2CPP_STRUCT_SettingElement_DEFINED
struct SettingElement__Class;
struct SettingElement {
    struct SettingElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingElement_FWDDECL)
#define IL2CPP_STRUCT_SettingElement_FWDDECL
#include <Modloader/app/structs/SettingElement__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingElement_DEFINED) && !defined(IL2CPP_STRUCT_SettingElement_FWDDECL)
#include <Modloader/app/structs/SettingElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
