#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectStorage_DEFINED)
#include <Modloader/app/structs/ObjectStorage__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectStorage_DEFINED
struct ObjectStorage__Class;
struct ObjectStorage {
    struct ObjectStorage__Class* klass;
    MonitorData* monitor;
    struct ObjectStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectStorage_FWDDECL)
#define IL2CPP_STRUCT_ObjectStorage_FWDDECL
#include <Modloader/app/structs/ObjectStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectStorage_DEFINED) && !defined(IL2CPP_STRUCT_ObjectStorage_FWDDECL)
#include <Modloader/app/structs/ObjectStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
