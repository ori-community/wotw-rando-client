#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartFlip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartFlip_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartFlip_DEFINED)
#include <Modloader/app/structs/CartFlip__Fields.h>
#if defined(IL2CPP_STRUCT_CartFlip__Fields_DEFINED)
#define IL2CPP_STRUCT_CartFlip_DEFINED
struct CartFlip__Class;
struct CartFlip {
    struct CartFlip__Class* klass;
    MonitorData* monitor;
    struct CartFlip__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartFlip_FWDDECL)
#define IL2CPP_STRUCT_CartFlip_FWDDECL
#include <Modloader/app/structs/CartFlip__Class.h>
#endif
#undef IL2CPP_STRUCT_CartFlip_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartFlip_DEFINED) && !defined(IL2CPP_STRUCT_CartFlip_FWDDECL)
#include <Modloader/app/structs/CartFlip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartFlip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
