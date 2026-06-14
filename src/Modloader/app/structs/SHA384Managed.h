#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA384Managed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA384Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA384Managed_DEFINED)
#include <Modloader/app/structs/SHA384Managed__Fields.h>
#if defined(IL2CPP_STRUCT_SHA384Managed__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA384Managed_DEFINED
struct SHA384Managed__Class;
struct SHA384Managed {
    struct SHA384Managed__Class* klass;
    MonitorData* monitor;
    struct SHA384Managed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA384Managed_FWDDECL)
#define IL2CPP_STRUCT_SHA384Managed_FWDDECL
#include <Modloader/app/structs/SHA384Managed__Class.h>
#endif
#undef IL2CPP_STRUCT_SHA384Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA384Managed_DEFINED) && !defined(IL2CPP_STRUCT_SHA384Managed_FWDDECL)
#include <Modloader/app/structs/SHA384Managed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA384Managed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
