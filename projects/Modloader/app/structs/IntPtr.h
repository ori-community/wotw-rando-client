#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPtr_DEFINED)
#define IL2CPP_STRUCT_IntPtr_DEFINED
struct Void;
struct IntPtr {
    struct Void* m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_IntPtr_FWDDECL)
#define IL2CPP_STRUCT_IntPtr_FWDDECL
#include <Modloader/app/structs/Void.h>
#endif
#undef IL2CPP_STRUCT_IntPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntPtr_DEFINED) && !defined(IL2CPP_STRUCT_IntPtr_FWDDECL)
#include <Modloader/app/structs/IntPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
