#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoModule_DEFINED)
#include <Modloader/app/structs/MonoModule__Fields.h>
#if defined(IL2CPP_STRUCT_MonoModule__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoModule_DEFINED
struct MonoModule__Class;
struct MonoModule {
    struct MonoModule__Class* klass;
    MonitorData* monitor;
    struct MonoModule__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoModule_FWDDECL)
#define IL2CPP_STRUCT_MonoModule_FWDDECL
#include <Modloader/app/structs/MonoModule__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoModule_DEFINED) && !defined(IL2CPP_STRUCT_MonoModule_FWDDECL)
#include <Modloader/app/structs/MonoModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
