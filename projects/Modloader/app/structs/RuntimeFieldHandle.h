#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeFieldHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeFieldHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeFieldHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeFieldHandle_DEFINED
struct RuntimeFieldHandle {
    void* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeFieldHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeFieldHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeFieldHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeFieldHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeFieldHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeFieldHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeFieldHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
