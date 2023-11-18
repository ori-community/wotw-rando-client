#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartBouncer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartBouncer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBouncer_DEFINED)
#include <Modloader/app/structs/CartBouncer__Fields.h>
#if defined(IL2CPP_STRUCT_CartBouncer__Fields_DEFINED)
#define IL2CPP_STRUCT_CartBouncer_DEFINED
struct CartBouncer__Class;
struct CartBouncer {
    struct CartBouncer__Class* klass;
    MonitorData* monitor;
    struct CartBouncer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartBouncer_FWDDECL)
#define IL2CPP_STRUCT_CartBouncer_FWDDECL
#include <Modloader/app/structs/CartBouncer__Class.h>
#endif
#undef IL2CPP_STRUCT_CartBouncer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBouncer_DEFINED) && !defined(IL2CPP_STRUCT_CartBouncer_FWDDECL)
#include <Modloader/app/structs/CartBouncer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartBouncer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
