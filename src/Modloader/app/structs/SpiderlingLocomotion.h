#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingLocomotion_DEFINED)
#include <Modloader/app/structs/SpiderlingLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderlingLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderlingLocomotion_DEFINED
struct SpiderlingLocomotion__Class;
struct SpiderlingLocomotion {
    struct SpiderlingLocomotion__Class* klass;
    MonitorData* monitor;
    struct SpiderlingLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingLocomotion_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingLocomotion_FWDDECL
#include <Modloader/app/structs/SpiderlingLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderlingLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingLocomotion_FWDDECL)
#include <Modloader/app/structs/SpiderlingLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
