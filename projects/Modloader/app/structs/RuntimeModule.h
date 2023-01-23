#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeModule_DEFINED)
#include <Modloader/app/structs/RuntimeModule__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeModule__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeModule_DEFINED
struct RuntimeModule__Class;
struct RuntimeModule {
    struct RuntimeModule__Class* klass;
    MonitorData* monitor;
    struct RuntimeModule__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeModule_FWDDECL)
#define IL2CPP_STRUCT_RuntimeModule_FWDDECL
#include <Modloader/app/structs/RuntimeModule__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeModule_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeModule_FWDDECL)
#include <Modloader/app/structs/RuntimeModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
