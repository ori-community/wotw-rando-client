#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRng_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRng_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRng_DEFINED)
#define IL2CPP_STRUCT_IRng_DEFINED
struct IRng__Class;
struct IRng {
    struct IRng__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRng_FWDDECL)
#define IL2CPP_STRUCT_IRng_FWDDECL
#include <Modloader/app/structs/IRng__Class.h>
#endif
#undef IL2CPP_STRUCT_IRng_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRng_DEFINED) && !defined(IL2CPP_STRUCT_IRng_FWDDECL)
#include <Modloader/app/structs/IRng.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRng.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
