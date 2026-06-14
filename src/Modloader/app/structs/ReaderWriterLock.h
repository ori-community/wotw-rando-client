#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderWriterLock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderWriterLock_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLock_DEFINED)
#include <Modloader/app/structs/ReaderWriterLock__Fields.h>
#if defined(IL2CPP_STRUCT_ReaderWriterLock__Fields_DEFINED)
#define IL2CPP_STRUCT_ReaderWriterLock_DEFINED
struct ReaderWriterLock__Class;
struct ReaderWriterLock {
    struct ReaderWriterLock__Class* klass;
    MonitorData* monitor;
    struct ReaderWriterLock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReaderWriterLock_FWDDECL)
#define IL2CPP_STRUCT_ReaderWriterLock_FWDDECL
#include <Modloader/app/structs/ReaderWriterLock__Class.h>
#endif
#undef IL2CPP_STRUCT_ReaderWriterLock_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLock_DEFINED) && !defined(IL2CPP_STRUCT_ReaderWriterLock_FWDDECL)
#include <Modloader/app/structs/ReaderWriterLock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderWriterLock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
