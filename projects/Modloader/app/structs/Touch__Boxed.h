#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Touch__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Touch__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Touch__Boxed_DEFINED)
#include <Modloader/app/structs/Touch.h>
#if defined(IL2CPP_STRUCT_Touch_DEFINED)
#define IL2CPP_STRUCT_Touch__Boxed_DEFINED
struct Touch__Class;
struct Touch__Boxed {
    struct Touch__Class* klass;
    MonitorData* monitor;
    struct Touch fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Touch__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Touch__Boxed_FWDDECL
#include <Modloader/app/structs/Touch__Class.h>
#endif
#undef IL2CPP_STRUCT_Touch__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Touch__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Touch__Boxed_FWDDECL)
#include <Modloader/app/structs/Touch__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Touch__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
