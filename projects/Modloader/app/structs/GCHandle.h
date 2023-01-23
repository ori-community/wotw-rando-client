#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GCHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GCHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_GCHandle_DEFINED
struct GCHandle {
    int32_t handle;
};
#endif
#if !defined(IL2CPP_STRUCT_GCHandle_FWDDECL)
#define IL2CPP_STRUCT_GCHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_GCHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCHandle_DEFINED) && !defined(IL2CPP_STRUCT_GCHandle_FWDDECL)
#include <Modloader/app/structs/GCHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GCHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
