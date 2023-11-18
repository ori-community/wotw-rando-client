#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultProxySectionInternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultProxySectionInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultProxySectionInternal_DEFINED)
#include <Modloader/app/structs/DefaultProxySectionInternal__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultProxySectionInternal_DEFINED
struct DefaultProxySectionInternal__Class;
struct DefaultProxySectionInternal {
    struct DefaultProxySectionInternal__Class* klass;
    MonitorData* monitor;
    struct DefaultProxySectionInternal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultProxySectionInternal_FWDDECL)
#define IL2CPP_STRUCT_DefaultProxySectionInternal_FWDDECL
#include <Modloader/app/structs/DefaultProxySectionInternal__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultProxySectionInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultProxySectionInternal_DEFINED) && !defined(IL2CPP_STRUCT_DefaultProxySectionInternal_FWDDECL)
#include <Modloader/app/structs/DefaultProxySectionInternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultProxySectionInternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
