#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BTPrefs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BTPrefs_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTPrefs_DEFINED)
#include <Modloader/app/structs/BTPrefs__Fields.h>
#if defined(IL2CPP_STRUCT_BTPrefs__Fields_DEFINED)
#define IL2CPP_STRUCT_BTPrefs_DEFINED
struct BTPrefs__Class;
struct BTPrefs {
    struct BTPrefs__Class* klass;
    MonitorData* monitor;
    struct BTPrefs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BTPrefs_FWDDECL)
#define IL2CPP_STRUCT_BTPrefs_FWDDECL
#include <Modloader/app/structs/BTPrefs__Class.h>
#endif
#undef IL2CPP_STRUCT_BTPrefs_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTPrefs_DEFINED) && !defined(IL2CPP_STRUCT_BTPrefs_FWDDECL)
#include <Modloader/app/structs/BTPrefs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BTPrefs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
