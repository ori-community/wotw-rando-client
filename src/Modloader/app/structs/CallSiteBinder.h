#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallSiteBinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallSiteBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallSiteBinder_DEFINED)
#include <Modloader/app/structs/CallSiteBinder__Fields.h>
#if defined(IL2CPP_STRUCT_CallSiteBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_CallSiteBinder_DEFINED
struct CallSiteBinder__Class;
struct CallSiteBinder {
    struct CallSiteBinder__Class* klass;
    MonitorData* monitor;
    struct CallSiteBinder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallSiteBinder_FWDDECL)
#define IL2CPP_STRUCT_CallSiteBinder_FWDDECL
#include <Modloader/app/structs/CallSiteBinder__Class.h>
#endif
#undef IL2CPP_STRUCT_CallSiteBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallSiteBinder_DEFINED) && !defined(IL2CPP_STRUCT_CallSiteBinder_FWDDECL)
#include <Modloader/app/structs/CallSiteBinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallSiteBinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
