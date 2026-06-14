#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartEnter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartEnter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartEnter_DEFINED)
#include <Modloader/app/structs/CartEnter__Fields.h>
#if defined(IL2CPP_STRUCT_CartEnter__Fields_DEFINED)
#define IL2CPP_STRUCT_CartEnter_DEFINED
struct CartEnter__Class;
struct CartEnter {
    struct CartEnter__Class* klass;
    MonitorData* monitor;
    struct CartEnter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartEnter_FWDDECL)
#define IL2CPP_STRUCT_CartEnter_FWDDECL
#include <Modloader/app/structs/CartEnter__Class.h>
#endif
#undef IL2CPP_STRUCT_CartEnter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartEnter_DEFINED) && !defined(IL2CPP_STRUCT_CartEnter_FWDDECL)
#include <Modloader/app/structs/CartEnter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartEnter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
