#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartItem_DEFINED)
#include <Modloader/app/structs/CartItem__Fields.h>
#if defined(IL2CPP_STRUCT_CartItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CartItem_DEFINED
struct CartItem__Class;
struct CartItem {
    struct CartItem__Class* klass;
    MonitorData* monitor;
    struct CartItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartItem_FWDDECL)
#define IL2CPP_STRUCT_CartItem_FWDDECL
#include <Modloader/app/structs/CartItem__Class.h>
#endif
#undef IL2CPP_STRUCT_CartItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartItem_DEFINED) && !defined(IL2CPP_STRUCT_CartItem_FWDDECL)
#include <Modloader/app/structs/CartItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
