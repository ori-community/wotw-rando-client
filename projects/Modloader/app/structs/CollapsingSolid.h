#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollapsingSolid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollapsingSolid_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingSolid_DEFINED)
#include <Modloader/app/structs/CollapsingSolid__Fields.h>
#if defined(IL2CPP_STRUCT_CollapsingSolid__Fields_DEFINED)
#define IL2CPP_STRUCT_CollapsingSolid_DEFINED
struct CollapsingSolid__Class;
struct CollapsingSolid {
    struct CollapsingSolid__Class* klass;
    MonitorData* monitor;
    struct CollapsingSolid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollapsingSolid_FWDDECL)
#define IL2CPP_STRUCT_CollapsingSolid_FWDDECL
#include <Modloader/app/structs/CollapsingSolid__Class.h>
#endif
#undef IL2CPP_STRUCT_CollapsingSolid_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingSolid_DEFINED) && !defined(IL2CPP_STRUCT_CollapsingSolid_FWDDECL)
#include <Modloader/app/structs/CollapsingSolid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollapsingSolid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
