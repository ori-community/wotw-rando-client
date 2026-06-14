#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDoubleStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDoubleStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDoubleStorage_DEFINED)
#include <Modloader/app/structs/SqlDoubleStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlDoubleStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlDoubleStorage_DEFINED
struct SqlDoubleStorage__Class;
struct SqlDoubleStorage {
    struct SqlDoubleStorage__Class* klass;
    MonitorData* monitor;
    struct SqlDoubleStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlDoubleStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlDoubleStorage_FWDDECL
#include <Modloader/app/structs/SqlDoubleStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlDoubleStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDoubleStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlDoubleStorage_FWDDECL)
#include <Modloader/app/structs/SqlDoubleStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDoubleStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
