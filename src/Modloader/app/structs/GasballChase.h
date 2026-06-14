#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballChase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballChase_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballChase_DEFINED)
#include <Modloader/app/structs/GasballChase__Fields.h>
#if defined(IL2CPP_STRUCT_GasballChase__Fields_DEFINED)
#define IL2CPP_STRUCT_GasballChase_DEFINED
struct GasballChase__Class;
struct GasballChase {
    struct GasballChase__Class* klass;
    MonitorData* monitor;
    struct GasballChase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballChase_FWDDECL)
#define IL2CPP_STRUCT_GasballChase_FWDDECL
#include <Modloader/app/structs/GasballChase__Class.h>
#endif
#undef IL2CPP_STRUCT_GasballChase_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballChase_DEFINED) && !defined(IL2CPP_STRUCT_GasballChase_FWDDECL)
#include <Modloader/app/structs/GasballChase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballChase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
