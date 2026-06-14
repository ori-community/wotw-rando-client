#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RedefineEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RedefineEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RedefineEntry_DEFINED)
#include <Modloader/app/structs/RedefineEntry__Fields.h>
#if defined(IL2CPP_STRUCT_RedefineEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_RedefineEntry_DEFINED
struct RedefineEntry__Class;
struct RedefineEntry {
    struct RedefineEntry__Class* klass;
    MonitorData* monitor;
    struct RedefineEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RedefineEntry_FWDDECL)
#define IL2CPP_STRUCT_RedefineEntry_FWDDECL
#include <Modloader/app/structs/RedefineEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_RedefineEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RedefineEntry_DEFINED) && !defined(IL2CPP_STRUCT_RedefineEntry_FWDDECL)
#include <Modloader/app/structs/RedefineEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RedefineEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
