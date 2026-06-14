#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Variant__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Variant__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Variant__Boxed_DEFINED)
#include <Modloader/app/structs/Variant.h>
#if defined(IL2CPP_STRUCT_Variant_DEFINED)
#define IL2CPP_STRUCT_Variant__Boxed_DEFINED
struct Variant__Class;
struct Variant__Boxed {
    struct Variant__Class* klass;
    MonitorData* monitor;
    struct Variant fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Variant__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Variant__Boxed_FWDDECL
#include <Modloader/app/structs/Variant__Class.h>
#endif
#undef IL2CPP_STRUCT_Variant__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Variant__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Variant__Boxed_FWDDECL)
#include <Modloader/app/structs/Variant__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Variant__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
