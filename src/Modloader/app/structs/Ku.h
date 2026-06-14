#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ku_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ku_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ku_DEFINED)
#include <Modloader/app/structs/Ku__Fields.h>
#if defined(IL2CPP_STRUCT_Ku__Fields_DEFINED)
#define IL2CPP_STRUCT_Ku_DEFINED
struct Ku__Class;
struct Ku {
    struct Ku__Class* klass;
    MonitorData* monitor;
    struct Ku__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ku_FWDDECL)
#define IL2CPP_STRUCT_Ku_FWDDECL
#include <Modloader/app/structs/Ku__Class.h>
#endif
#undef IL2CPP_STRUCT_Ku_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ku_DEFINED) && !defined(IL2CPP_STRUCT_Ku_FWDDECL)
#include <Modloader/app/structs/Ku.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ku.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
