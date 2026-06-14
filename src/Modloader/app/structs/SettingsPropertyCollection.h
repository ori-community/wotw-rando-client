#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsPropertyCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsPropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsPropertyCollection_DEFINED)
#define IL2CPP_STRUCT_SettingsPropertyCollection_DEFINED
struct SettingsPropertyCollection__Class;
struct SettingsPropertyCollection {
    struct SettingsPropertyCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsPropertyCollection_FWDDECL)
#define IL2CPP_STRUCT_SettingsPropertyCollection_FWDDECL
#include <Modloader/app/structs/SettingsPropertyCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsPropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsPropertyCollection_DEFINED) && !defined(IL2CPP_STRUCT_SettingsPropertyCollection_FWDDECL)
#include <Modloader/app/structs/SettingsPropertyCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsPropertyCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
