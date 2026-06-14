#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDateTimeStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDateTimeStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDateTimeStorage_DEFINED)
#include <Modloader/app/structs/SqlDateTimeStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlDateTimeStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlDateTimeStorage_DEFINED
struct SqlDateTimeStorage__Class;
struct SqlDateTimeStorage {
    struct SqlDateTimeStorage__Class* klass;
    MonitorData* monitor;
    struct SqlDateTimeStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlDateTimeStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlDateTimeStorage_FWDDECL
#include <Modloader/app/structs/SqlDateTimeStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlDateTimeStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDateTimeStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlDateTimeStorage_FWDDECL)
#include <Modloader/app/structs/SqlDateTimeStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDateTimeStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
