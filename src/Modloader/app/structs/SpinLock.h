#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpinLock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpinLock_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpinLock_DEFINED)
#define IL2CPP_STRUCT_SpinLock_DEFINED
struct SpinLock {
    int32_t m_owner;
};
#endif
#if !defined(IL2CPP_STRUCT_SpinLock_FWDDECL)
#define IL2CPP_STRUCT_SpinLock_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpinLock_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpinLock_DEFINED) && !defined(IL2CPP_STRUCT_SpinLock_FWDDECL)
#include <Modloader/app/structs/SpinLock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpinLock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
