#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartBody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBody_DEFINED)
#include <Modloader/app/structs/CartBody__Fields.h>
#if defined(IL2CPP_STRUCT_CartBody__Fields_DEFINED)
#define IL2CPP_STRUCT_CartBody_DEFINED
struct CartBody__Class;
struct CartBody {
    struct CartBody__Class* klass;
    MonitorData* monitor;
    struct CartBody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartBody_FWDDECL)
#define IL2CPP_STRUCT_CartBody_FWDDECL
#include <Modloader/app/structs/CartBody__Class.h>
#endif
#undef IL2CPP_STRUCT_CartBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBody_DEFINED) && !defined(IL2CPP_STRUCT_CartBody_FWDDECL)
#include <Modloader/app/structs/CartBody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartBody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
