#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderWriterLock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderWriterLock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLock__Fields_DEFINED)
#define IL2CPP_STRUCT_ReaderWriterLock__Fields_DEFINED
struct LockQueue;
struct Hashtable;
struct __declspec(align(8)) ReaderWriterLock__Fields {
    int32_t seq_num;
    int32_t state;
    int32_t readers;
    int32_t writer_lock_owner;
    struct LockQueue* writer_queue;
    struct Hashtable* reader_locks;
};
#endif
#if !defined(IL2CPP_STRUCT_ReaderWriterLock__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReaderWriterLock__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/LockQueue.h>
#endif
#undef IL2CPP_STRUCT_ReaderWriterLock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterLock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReaderWriterLock__Fields_FWDDECL)
#include <Modloader/app/structs/ReaderWriterLock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderWriterLock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
