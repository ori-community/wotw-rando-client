#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StandaloneInputModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StandaloneInputModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneInputModule_DEFINED)
#include <Modloader/app/structs/StandaloneInputModule__Fields.h>
#if defined(IL2CPP_STRUCT_StandaloneInputModule__Fields_DEFINED)
#define IL2CPP_STRUCT_StandaloneInputModule_DEFINED
struct StandaloneInputModule__Class;
struct StandaloneInputModule {
    struct StandaloneInputModule__Class* klass;
    MonitorData* monitor;
    struct StandaloneInputModule__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StandaloneInputModule_FWDDECL)
#define IL2CPP_STRUCT_StandaloneInputModule_FWDDECL
#include <Modloader/app/structs/StandaloneInputModule__Class.h>
#endif
#undef IL2CPP_STRUCT_StandaloneInputModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneInputModule_DEFINED) && !defined(IL2CPP_STRUCT_StandaloneInputModule_FWDDECL)
#include <Modloader/app/structs/StandaloneInputModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StandaloneInputModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
