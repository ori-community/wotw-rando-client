#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartStopper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartStopper_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartStopper_DEFINED)
#include <Modloader/app/structs/CartStopper__Fields.h>
#if defined(IL2CPP_STRUCT_CartStopper__Fields_DEFINED)
#define IL2CPP_STRUCT_CartStopper_DEFINED
struct CartStopper__Class;
struct CartStopper {
    struct CartStopper__Class* klass;
    MonitorData* monitor;
    struct CartStopper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartStopper_FWDDECL)
#define IL2CPP_STRUCT_CartStopper_FWDDECL
#include <Modloader/app/structs/CartStopper__Class.h>
#endif
#undef IL2CPP_STRUCT_CartStopper_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartStopper_DEFINED) && !defined(IL2CPP_STRUCT_CartStopper_FWDDECL)
#include <Modloader/app/structs/CartStopper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartStopper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
