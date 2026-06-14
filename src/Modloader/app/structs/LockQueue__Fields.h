#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockQueue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_LockQueue__Fields_DEFINED
struct ReaderWriterLock;
struct __declspec(align(8)) LockQueue__Fields {
    struct ReaderWriterLock* rwlock;
    int32_t lockCount;
};
#endif
#if !defined(IL2CPP_STRUCT_LockQueue__Fields_FWDDECL)
#define IL2CPP_STRUCT_LockQueue__Fields_FWDDECL
#include <Modloader/app/structs/ReaderWriterLock.h>
#endif
#undef IL2CPP_STRUCT_LockQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockQueue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LockQueue__Fields_FWDDECL)
#include <Modloader/app/structs/LockQueue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockQueue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
