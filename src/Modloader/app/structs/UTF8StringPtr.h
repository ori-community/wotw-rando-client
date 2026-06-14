#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF8StringPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF8StringPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF8StringPtr_DEFINED)
#define IL2CPP_STRUCT_UTF8StringPtr_DEFINED
struct UTF8StringPtr {
    void* pointer;
};
#endif
#if !defined(IL2CPP_STRUCT_UTF8StringPtr_FWDDECL)
#define IL2CPP_STRUCT_UTF8StringPtr_FWDDECL
#endif
#undef IL2CPP_STRUCT_UTF8StringPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF8StringPtr_DEFINED) && !defined(IL2CPP_STRUCT_UTF8StringPtr_FWDDECL)
#include <Modloader/app/structs/UTF8StringPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF8StringPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
