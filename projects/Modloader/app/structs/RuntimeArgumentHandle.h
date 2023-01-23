#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeArgumentHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeArgumentHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeArgumentHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeArgumentHandle_DEFINED
struct RuntimeArgumentHandle {
    void* args;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeArgumentHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeArgumentHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeArgumentHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeArgumentHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeArgumentHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeArgumentHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeArgumentHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
