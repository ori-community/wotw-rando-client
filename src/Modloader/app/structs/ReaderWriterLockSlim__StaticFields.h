#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_DEFINED
struct ReaderWriterCount;
struct ReaderWriterLockSlim__StaticFields {
    int64_t s_nextLockID;
    struct ReaderWriterCount* t_rwc;
};
#endif
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_FWDDECL
#include <Modloader/app/structs/ReaderWriterCount.h>
#endif
#undef IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ReaderWriterLockSlim__StaticFields_FWDDECL)
#include <Modloader/app/structs/ReaderWriterLockSlim__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderWriterLockSlim__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
