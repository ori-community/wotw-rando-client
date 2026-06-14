#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingElementCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingElementCollection_DEFINED)
#define IL2CPP_STRUCT_SettingElementCollection_DEFINED
struct SettingElementCollection__Class;
struct SettingElementCollection {
    struct SettingElementCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingElementCollection_FWDDECL)
#define IL2CPP_STRUCT_SettingElementCollection_FWDDECL
#include <Modloader/app/structs/SettingElementCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingElementCollection_DEFINED) && !defined(IL2CPP_STRUCT_SettingElementCollection_FWDDECL)
#include <Modloader/app/structs/SettingElementCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingElementCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
