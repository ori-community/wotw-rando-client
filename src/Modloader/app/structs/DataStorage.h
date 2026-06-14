#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataStorage_DEFINED)
#include <Modloader/app/structs/DataStorage__Fields.h>
#if defined(IL2CPP_STRUCT_DataStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_DataStorage_DEFINED
struct DataStorage__Class;
struct DataStorage {
    struct DataStorage__Class* klass;
    MonitorData* monitor;
    struct DataStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataStorage_FWDDECL)
#define IL2CPP_STRUCT_DataStorage_FWDDECL
#include <Modloader/app/structs/DataStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_DataStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataStorage_DEFINED) && !defined(IL2CPP_STRUCT_DataStorage_FWDDECL)
#include <Modloader/app/structs/DataStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
