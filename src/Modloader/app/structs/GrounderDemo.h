#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrounderDemo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrounderDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderDemo_DEFINED)
#include <Modloader/app/structs/GrounderDemo__Fields.h>
#if defined(IL2CPP_STRUCT_GrounderDemo__Fields_DEFINED)
#define IL2CPP_STRUCT_GrounderDemo_DEFINED
struct GrounderDemo__Class;
struct GrounderDemo {
    struct GrounderDemo__Class* klass;
    MonitorData* monitor;
    struct GrounderDemo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrounderDemo_FWDDECL)
#define IL2CPP_STRUCT_GrounderDemo_FWDDECL
#include <Modloader/app/structs/GrounderDemo__Class.h>
#endif
#undef IL2CPP_STRUCT_GrounderDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderDemo_DEFINED) && !defined(IL2CPP_STRUCT_GrounderDemo_FWDDECL)
#include <Modloader/app/structs/GrounderDemo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrounderDemo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
