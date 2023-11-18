#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDecimalStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDecimalStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDecimalStorage_DEFINED)
#include <Modloader/app/structs/SqlDecimalStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlDecimalStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlDecimalStorage_DEFINED
struct SqlDecimalStorage__Class;
struct SqlDecimalStorage {
    struct SqlDecimalStorage__Class* klass;
    MonitorData* monitor;
    struct SqlDecimalStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlDecimalStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlDecimalStorage_FWDDECL
#include <Modloader/app/structs/SqlDecimalStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlDecimalStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDecimalStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlDecimalStorage_FWDDECL)
#include <Modloader/app/structs/SqlDecimalStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDecimalStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
