#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeVariables_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeVariables_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeVariables_DEFINED)
#include <Modloader/app/structs/RuntimeVariables__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeVariables__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeVariables_DEFINED
struct RuntimeVariables__Class;
struct RuntimeVariables {
    struct RuntimeVariables__Class* klass;
    MonitorData* monitor;
    struct RuntimeVariables__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeVariables_FWDDECL)
#define IL2CPP_STRUCT_RuntimeVariables_FWDDECL
#include <Modloader/app/structs/RuntimeVariables__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeVariables_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeVariables_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeVariables_FWDDECL)
#include <Modloader/app/structs/RuntimeVariables.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeVariables.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
