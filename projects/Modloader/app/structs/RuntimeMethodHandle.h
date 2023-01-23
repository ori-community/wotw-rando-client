#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeMethodHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeMethodHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeMethodHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeMethodHandle_DEFINED
struct RuntimeMethodHandle {
    void* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeMethodHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeMethodHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeMethodHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeMethodHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeMethodHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
