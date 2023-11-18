#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallSite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallSite_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallSite_DEFINED)
#include <Modloader/app/structs/CallSite__Fields.h>
#if defined(IL2CPP_STRUCT_CallSite__Fields_DEFINED)
#define IL2CPP_STRUCT_CallSite_DEFINED
struct CallSite__Class;
struct CallSite {
    struct CallSite__Class* klass;
    MonitorData* monitor;
    struct CallSite__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallSite_FWDDECL)
#define IL2CPP_STRUCT_CallSite_FWDDECL
#include <Modloader/app/structs/CallSite__Class.h>
#endif
#undef IL2CPP_STRUCT_CallSite_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallSite_DEFINED) && !defined(IL2CPP_STRUCT_CallSite_FWDDECL)
#include <Modloader/app/structs/CallSite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallSite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
