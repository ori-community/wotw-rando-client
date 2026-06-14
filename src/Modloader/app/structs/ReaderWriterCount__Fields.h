#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderWriterCount__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderWriterCount__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterCount__Fields_DEFINED)
#define IL2CPP_STRUCT_ReaderWriterCount__Fields_DEFINED
struct ReaderWriterCount;
struct __declspec(align(8)) ReaderWriterCount__Fields {
    int64_t lockID;
    int32_t readercount;
    int32_t writercount;
    int32_t upgradecount;
    struct ReaderWriterCount* next;
};
#endif
#if !defined(IL2CPP_STRUCT_ReaderWriterCount__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReaderWriterCount__Fields_FWDDECL
#include <Modloader/app/structs/ReaderWriterCount.h>
#endif
#undef IL2CPP_STRUCT_ReaderWriterCount__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterCount__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReaderWriterCount__Fields_FWDDECL)
#include <Modloader/app/structs/ReaderWriterCount__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderWriterCount__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
