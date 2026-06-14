#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderWriterLockSlim_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderWriterLockSlim_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim_DEFINED)
#include <Modloader/app/structs/ReaderWriterLockSlim__Fields.h>
#if defined(IL2CPP_STRUCT_ReaderWriterLockSlim__Fields_DEFINED)
#define IL2CPP_STRUCT_ReaderWriterLockSlim_DEFINED
struct ReaderWriterLockSlim__Class;
struct ReaderWriterLockSlim {
    struct ReaderWriterLockSlim__Class* klass;
    MonitorData* monitor;
    struct ReaderWriterLockSlim__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim_FWDDECL)
#define IL2CPP_STRUCT_ReaderWriterLockSlim_FWDDECL
#include <Modloader/app/structs/ReaderWriterLockSlim__Class.h>
#endif
#undef IL2CPP_STRUCT_ReaderWriterLockSlim_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLockSlim_DEFINED) && !defined(IL2CPP_STRUCT_ReaderWriterLockSlim_FWDDECL)
#include <Modloader/app/structs/ReaderWriterLockSlim.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderWriterLockSlim.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
