#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallRequestContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallRequestContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallRequestContainer_DEFINED)
#include <Modloader/app/structs/CallRequestContainer__Fields.h>
#if defined(IL2CPP_STRUCT_CallRequestContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_CallRequestContainer_DEFINED
struct CallRequestContainer__Class;
struct CallRequestContainer {
    struct CallRequestContainer__Class* klass;
    MonitorData* monitor;
    struct CallRequestContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallRequestContainer_FWDDECL)
#define IL2CPP_STRUCT_CallRequestContainer_FWDDECL
#include <Modloader/app/structs/CallRequestContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_CallRequestContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallRequestContainer_DEFINED) && !defined(IL2CPP_STRUCT_CallRequestContainer_FWDDECL)
#include <Modloader/app/structs/CallRequestContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallRequestContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
