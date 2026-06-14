#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlBooleanStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlBooleanStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBooleanStorage_DEFINED)
#include <Modloader/app/structs/SqlBooleanStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlBooleanStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlBooleanStorage_DEFINED
struct SqlBooleanStorage__Class;
struct SqlBooleanStorage {
    struct SqlBooleanStorage__Class* klass;
    MonitorData* monitor;
    struct SqlBooleanStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlBooleanStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlBooleanStorage_FWDDECL
#include <Modloader/app/structs/SqlBooleanStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlBooleanStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBooleanStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlBooleanStorage_FWDDECL)
#include <Modloader/app/structs/SqlBooleanStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlBooleanStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
