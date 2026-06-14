#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ADP_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ADP_INITIALIZING
#if !defined(IL2CPP_STRUCT_ADP_DEFINED)
#define IL2CPP_STRUCT_ADP_DEFINED
struct ADP__Class;
struct ADP {
    struct ADP__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ADP_FWDDECL)
#define IL2CPP_STRUCT_ADP_FWDDECL
#include <Modloader/app/structs/ADP__Class.h>
#endif
#undef IL2CPP_STRUCT_ADP_INITIALIZING
#if !defined(IL2CPP_STRUCT_ADP_DEFINED) && !defined(IL2CPP_STRUCT_ADP_FWDDECL)
#include <Modloader/app/structs/ADP.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ADP.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
