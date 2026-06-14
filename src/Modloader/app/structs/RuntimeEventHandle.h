#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeEventHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeEventHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeEventHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeEventHandle_DEFINED
struct RuntimeEventHandle {
    void* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeEventHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeEventHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeEventHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeEventHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeEventHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeEventHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeEventHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
