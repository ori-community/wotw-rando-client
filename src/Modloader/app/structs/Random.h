#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Random_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Random_INITIALIZING
#if !defined(IL2CPP_STRUCT_Random_DEFINED)
#include <Modloader/app/structs/Random__Fields.h>
#if defined(IL2CPP_STRUCT_Random__Fields_DEFINED)
#define IL2CPP_STRUCT_Random_DEFINED
struct Random__Class;
struct Random {
    struct Random__Class* klass;
    MonitorData* monitor;
    struct Random__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Random_FWDDECL)
#define IL2CPP_STRUCT_Random_FWDDECL
#include <Modloader/app/structs/Random__Class.h>
#endif
#undef IL2CPP_STRUCT_Random_INITIALIZING
#if !defined(IL2CPP_STRUCT_Random_DEFINED) && !defined(IL2CPP_STRUCT_Random_FWDDECL)
#include <Modloader/app/structs/Random.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Random.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
