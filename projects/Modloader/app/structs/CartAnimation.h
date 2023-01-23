#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartAnimation_DEFINED)
#include <Modloader/app/structs/CartAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_CartAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_CartAnimation_DEFINED
struct CartAnimation__Class;
struct CartAnimation {
    struct CartAnimation__Class* klass;
    MonitorData* monitor;
    struct CartAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartAnimation_FWDDECL)
#define IL2CPP_STRUCT_CartAnimation_FWDDECL
#include <Modloader/app/structs/CartAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_CartAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartAnimation_DEFINED) && !defined(IL2CPP_STRUCT_CartAnimation_FWDDECL)
#include <Modloader/app/structs/CartAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
