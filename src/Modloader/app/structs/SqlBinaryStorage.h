#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlBinaryStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlBinaryStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBinaryStorage_DEFINED)
#include <Modloader/app/structs/SqlBinaryStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlBinaryStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlBinaryStorage_DEFINED
struct SqlBinaryStorage__Class;
struct SqlBinaryStorage {
    struct SqlBinaryStorage__Class* klass;
    MonitorData* monitor;
    struct SqlBinaryStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlBinaryStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlBinaryStorage_FWDDECL
#include <Modloader/app/structs/SqlBinaryStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlBinaryStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBinaryStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlBinaryStorage_FWDDECL)
#include <Modloader/app/structs/SqlBinaryStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlBinaryStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
