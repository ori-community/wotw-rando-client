#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugPlaceholder_DEFINED)
#include <Modloader/app/structs/HornBugPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_HornBugPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugPlaceholder_DEFINED
struct HornBugPlaceholder__Class;
struct HornBugPlaceholder {
    struct HornBugPlaceholder__Class* klass;
    MonitorData* monitor;
    struct HornBugPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_HornBugPlaceholder_FWDDECL
#include <Modloader/app/structs/HornBugPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_HornBugPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_HornBugPlaceholder_FWDDECL)
#include <Modloader/app/structs/HornBugPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
