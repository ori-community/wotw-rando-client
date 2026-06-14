#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRChaperone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRChaperone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRChaperone_DEFINED)
#include <Modloader/app/structs/CVRChaperone__Fields.h>
#if defined(IL2CPP_STRUCT_CVRChaperone__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRChaperone_DEFINED
struct CVRChaperone__Class;
struct CVRChaperone {
    struct CVRChaperone__Class* klass;
    MonitorData* monitor;
    struct CVRChaperone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRChaperone_FWDDECL)
#define IL2CPP_STRUCT_CVRChaperone_FWDDECL
#include <Modloader/app/structs/CVRChaperone__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRChaperone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRChaperone_DEFINED) && !defined(IL2CPP_STRUCT_CVRChaperone_FWDDECL)
#include <Modloader/app/structs/CVRChaperone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRChaperone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
