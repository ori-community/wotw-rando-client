#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateData__Boxed_DEFINED)
#include <Modloader/app/structs/UberStateData.h>
#if defined(IL2CPP_STRUCT_UberStateData_DEFINED)
#define IL2CPP_STRUCT_UberStateData__Boxed_DEFINED
struct UberStateData__Class;
struct UberStateData__Boxed {
    struct UberStateData__Class* klass;
    MonitorData* monitor;
    struct UberStateData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UberStateData__Boxed_FWDDECL
#include <Modloader/app/structs/UberStateData__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UberStateData__Boxed_FWDDECL)
#include <Modloader/app/structs/UberStateData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
