#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TouchInputModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TouchInputModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchInputModule_DEFINED)
#include <Modloader/app/structs/TouchInputModule__Fields.h>
#if defined(IL2CPP_STRUCT_TouchInputModule__Fields_DEFINED)
#define IL2CPP_STRUCT_TouchInputModule_DEFINED
struct TouchInputModule__Class;
struct TouchInputModule {
    struct TouchInputModule__Class* klass;
    MonitorData* monitor;
    struct TouchInputModule__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TouchInputModule_FWDDECL)
#define IL2CPP_STRUCT_TouchInputModule_FWDDECL
#include <Modloader/app/structs/TouchInputModule__Class.h>
#endif
#undef IL2CPP_STRUCT_TouchInputModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchInputModule_DEFINED) && !defined(IL2CPP_STRUCT_TouchInputModule_FWDDECL)
#include <Modloader/app/structs/TouchInputModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TouchInputModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
