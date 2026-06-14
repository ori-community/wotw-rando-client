#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyHealthBar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyHealthBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyHealthBar_DEFINED)
#include <Modloader/app/structs/LegacyHealthBar__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyHealthBar__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyHealthBar_DEFINED
struct LegacyHealthBar__Class;
struct LegacyHealthBar {
    struct LegacyHealthBar__Class* klass;
    MonitorData* monitor;
    struct LegacyHealthBar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyHealthBar_FWDDECL)
#define IL2CPP_STRUCT_LegacyHealthBar_FWDDECL
#include <Modloader/app/structs/LegacyHealthBar__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyHealthBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyHealthBar_DEFINED) && !defined(IL2CPP_STRUCT_LegacyHealthBar_FWDDECL)
#include <Modloader/app/structs/LegacyHealthBar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyHealthBar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
