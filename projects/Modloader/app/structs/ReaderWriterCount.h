#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderWriterCount_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderWriterCount_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterCount_DEFINED)
#include <Modloader/app/structs/ReaderWriterCount__Fields.h>
#if defined(IL2CPP_STRUCT_ReaderWriterCount__Fields_DEFINED)
#define IL2CPP_STRUCT_ReaderWriterCount_DEFINED
struct ReaderWriterCount__Class;
struct ReaderWriterCount {
    struct ReaderWriterCount__Class* klass;
    MonitorData* monitor;
    struct ReaderWriterCount__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReaderWriterCount_FWDDECL)
#define IL2CPP_STRUCT_ReaderWriterCount_FWDDECL
#include <Modloader/app/structs/ReaderWriterCount__Class.h>
#endif
#undef IL2CPP_STRUCT_ReaderWriterCount_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderWriterCount_DEFINED) && !defined(IL2CPP_STRUCT_ReaderWriterCount_FWDDECL)
#include <Modloader/app/structs/ReaderWriterCount.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderWriterCount.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
