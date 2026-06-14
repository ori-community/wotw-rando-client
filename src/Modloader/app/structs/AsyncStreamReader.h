#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncStreamReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncStreamReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncStreamReader_DEFINED)
#include <Modloader/app/structs/AsyncStreamReader__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncStreamReader__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncStreamReader_DEFINED
struct AsyncStreamReader__Class;
struct AsyncStreamReader {
    struct AsyncStreamReader__Class* klass;
    MonitorData* monitor;
    struct AsyncStreamReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncStreamReader_FWDDECL)
#define IL2CPP_STRUCT_AsyncStreamReader_FWDDECL
#include <Modloader/app/structs/AsyncStreamReader__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncStreamReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncStreamReader_DEFINED) && !defined(IL2CPP_STRUCT_AsyncStreamReader_FWDDECL)
#include <Modloader/app/structs/AsyncStreamReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncStreamReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
