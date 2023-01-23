#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleFPS_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleFPS_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPS_DEFINED)
#include <Modloader/app/structs/SimpleFPS__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleFPS__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleFPS_DEFINED
struct SimpleFPS__Class;
struct SimpleFPS {
    struct SimpleFPS__Class* klass;
    MonitorData* monitor;
    struct SimpleFPS__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleFPS_FWDDECL)
#define IL2CPP_STRUCT_SimpleFPS_FWDDECL
#include <Modloader/app/structs/SimpleFPS__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleFPS_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPS_DEFINED) && !defined(IL2CPP_STRUCT_SimpleFPS_FWDDECL)
#include <Modloader/app/structs/SimpleFPS.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleFPS.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
