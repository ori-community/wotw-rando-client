#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaycastResult__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaycastResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastResult__Boxed_DEFINED)
#include <Modloader/app/structs/RaycastResult.h>
#if defined(IL2CPP_STRUCT_RaycastResult_DEFINED)
#define IL2CPP_STRUCT_RaycastResult__Boxed_DEFINED
struct RaycastResult__Class;
struct RaycastResult__Boxed {
    struct RaycastResult__Class* klass;
    MonitorData* monitor;
    struct RaycastResult fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaycastResult__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RaycastResult__Boxed_FWDDECL
#include <Modloader/app/structs/RaycastResult__Class.h>
#endif
#undef IL2CPP_STRUCT_RaycastResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastResult__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RaycastResult__Boxed_FWDDECL)
#include <Modloader/app/structs/RaycastResult__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaycastResult__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
