#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallOptions_DEFINED)
#include <Modloader/app/structs/CallOptions__Fields.h>
#if defined(IL2CPP_STRUCT_CallOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_CallOptions_DEFINED
struct CallOptions__Class;
struct CallOptions {
    struct CallOptions__Class* klass;
    MonitorData* monitor;
    struct CallOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallOptions_FWDDECL)
#define IL2CPP_STRUCT_CallOptions_FWDDECL
#include <Modloader/app/structs/CallOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_CallOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallOptions_DEFINED) && !defined(IL2CPP_STRUCT_CallOptions_FWDDECL)
#include <Modloader/app/structs/CallOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
