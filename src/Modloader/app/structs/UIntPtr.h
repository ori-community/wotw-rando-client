#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIntPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIntPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIntPtr_DEFINED)
#define IL2CPP_STRUCT_UIntPtr_DEFINED
struct Void;
struct UIntPtr {
    struct Void* _pointer;
};
#endif
#if !defined(IL2CPP_STRUCT_UIntPtr_FWDDECL)
#define IL2CPP_STRUCT_UIntPtr_FWDDECL
#include <Modloader/app/structs/Void.h>
#endif
#undef IL2CPP_STRUCT_UIntPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIntPtr_DEFINED) && !defined(IL2CPP_STRUCT_UIntPtr_FWDDECL)
#include <Modloader/app/structs/UIntPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIntPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
