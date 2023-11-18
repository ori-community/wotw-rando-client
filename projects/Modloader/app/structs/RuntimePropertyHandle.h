#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimePropertyHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimePropertyHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimePropertyHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimePropertyHandle_DEFINED
struct RuntimePropertyHandle {
    void* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimePropertyHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimePropertyHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimePropertyHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimePropertyHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimePropertyHandle_FWDDECL)
#include <Modloader/app/structs/RuntimePropertyHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimePropertyHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
