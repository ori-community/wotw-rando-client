#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Interp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Interp_INITIALIZING
#if !defined(IL2CPP_STRUCT_Interp_DEFINED)
#define IL2CPP_STRUCT_Interp_DEFINED
struct Interp__Class;
struct Interp {
    struct Interp__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Interp_FWDDECL)
#define IL2CPP_STRUCT_Interp_FWDDECL
#include <Modloader/app/structs/Interp__Class.h>
#endif
#undef IL2CPP_STRUCT_Interp_INITIALIZING
#if !defined(IL2CPP_STRUCT_Interp_DEFINED) && !defined(IL2CPP_STRUCT_Interp_FWDDECL)
#include <Modloader/app/structs/Interp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Interp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
