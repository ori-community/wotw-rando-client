#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TickData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TickData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TickData__Boxed_DEFINED)
#include <Modloader/app/structs/TickData.h>
#if defined(IL2CPP_STRUCT_TickData_DEFINED)
#define IL2CPP_STRUCT_TickData__Boxed_DEFINED
struct TickData__Class;
struct TickData__Boxed {
    struct TickData__Class* klass;
    MonitorData* monitor;
    struct TickData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TickData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TickData__Boxed_FWDDECL
#include <Modloader/app/structs/TickData__Class.h>
#endif
#undef IL2CPP_STRUCT_TickData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TickData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TickData__Boxed_FWDDECL)
#include <Modloader/app/structs/TickData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TickData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
