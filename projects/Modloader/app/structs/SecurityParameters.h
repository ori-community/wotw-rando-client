#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityParameters_DEFINED)
#include <Modloader/app/structs/SecurityParameters__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityParameters__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityParameters_DEFINED
struct SecurityParameters__Class;
struct SecurityParameters {
    struct SecurityParameters__Class* klass;
    MonitorData* monitor;
    struct SecurityParameters__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityParameters_FWDDECL)
#define IL2CPP_STRUCT_SecurityParameters_FWDDECL
#include <Modloader/app/structs/SecurityParameters__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityParameters_DEFINED) && !defined(IL2CPP_STRUCT_SecurityParameters_FWDDECL)
#include <Modloader/app/structs/SecurityParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
