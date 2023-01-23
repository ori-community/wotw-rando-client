#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinStomp_States_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinStomp_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStomp_States_DEFINED)
#include <Modloader/app/structs/SeinStomp_States__Fields.h>
#if defined(IL2CPP_STRUCT_SeinStomp_States__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinStomp_States_DEFINED
struct SeinStomp_States__Class;
struct SeinStomp_States {
    struct SeinStomp_States__Class* klass;
    MonitorData* monitor;
    struct SeinStomp_States__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinStomp_States_FWDDECL)
#define IL2CPP_STRUCT_SeinStomp_States_FWDDECL
#include <Modloader/app/structs/SeinStomp_States__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinStomp_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStomp_States_DEFINED) && !defined(IL2CPP_STRUCT_SeinStomp_States_FWDDECL)
#include <Modloader/app/structs/SeinStomp_States.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinStomp_States.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
