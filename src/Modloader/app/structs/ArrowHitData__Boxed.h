#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrowHitData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrowHitData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrowHitData__Boxed_DEFINED)
#include <Modloader/app/structs/ArrowHitData.h>
#if defined(IL2CPP_STRUCT_ArrowHitData_DEFINED)
#define IL2CPP_STRUCT_ArrowHitData__Boxed_DEFINED
struct ArrowHitData__Class;
struct ArrowHitData__Boxed {
    struct ArrowHitData__Class* klass;
    MonitorData* monitor;
    struct ArrowHitData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrowHitData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ArrowHitData__Boxed_FWDDECL
#include <Modloader/app/structs/ArrowHitData__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrowHitData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrowHitData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ArrowHitData__Boxed_FWDDECL)
#include <Modloader/app/structs/ArrowHitData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrowHitData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
