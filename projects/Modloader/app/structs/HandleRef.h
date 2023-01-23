#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandleRef_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandleRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandleRef_DEFINED)
#define IL2CPP_STRUCT_HandleRef_DEFINED
struct Object;
struct HandleRef {
    struct Object* m_wrapper;
    void* m_handle;
};
#endif
#if !defined(IL2CPP_STRUCT_HandleRef_FWDDECL)
#define IL2CPP_STRUCT_HandleRef_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_HandleRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandleRef_DEFINED) && !defined(IL2CPP_STRUCT_HandleRef_FWDDECL)
#include <Modloader/app/structs/HandleRef.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandleRef.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
