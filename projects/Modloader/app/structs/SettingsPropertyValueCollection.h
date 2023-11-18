#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsPropertyValueCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsPropertyValueCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsPropertyValueCollection_DEFINED)
#define IL2CPP_STRUCT_SettingsPropertyValueCollection_DEFINED
struct SettingsPropertyValueCollection__Class;
struct SettingsPropertyValueCollection {
    struct SettingsPropertyValueCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsPropertyValueCollection_FWDDECL)
#define IL2CPP_STRUCT_SettingsPropertyValueCollection_FWDDECL
#include <Modloader/app/structs/SettingsPropertyValueCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsPropertyValueCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsPropertyValueCollection_DEFINED) && !defined(IL2CPP_STRUCT_SettingsPropertyValueCollection_FWDDECL)
#include <Modloader/app/structs/SettingsPropertyValueCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsPropertyValueCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
