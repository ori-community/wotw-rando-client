#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaycastHit2D__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaycastHit2D__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastHit2D__Array_DEFINED)
#include <Modloader/app/structs/RaycastHit2D.h>
#if defined(IL2CPP_STRUCT_RaycastHit2D_DEFINED)
#define IL2CPP_STRUCT_RaycastHit2D__Array_DEFINED
struct RaycastHit2D__Array__Class;
struct RaycastHit2D__Array {
    struct RaycastHit2D__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct RaycastHit2D vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaycastHit2D__Array_FWDDECL)
#define IL2CPP_STRUCT_RaycastHit2D__Array_FWDDECL
#include <Modloader/app/structs/RaycastHit2D__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_RaycastHit2D__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastHit2D__Array_DEFINED) && !defined(IL2CPP_STRUCT_RaycastHit2D__Array_FWDDECL)
#include <Modloader/app/structs/RaycastHit2D__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaycastHit2D__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
