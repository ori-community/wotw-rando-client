#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeTypeHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeTypeHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeTypeHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeTypeHandle_DEFINED
struct RuntimeTypeHandle {
    void* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeTypeHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeTypeHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeTypeHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeTypeHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeTypeHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
