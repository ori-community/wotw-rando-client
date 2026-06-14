#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SByteStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SByteStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByteStorage_DEFINED)
#include <Modloader/app/structs/SByteStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SByteStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SByteStorage_DEFINED
struct SByteStorage__Class;
struct SByteStorage {
    struct SByteStorage__Class* klass;
    MonitorData* monitor;
    struct SByteStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SByteStorage_FWDDECL)
#define IL2CPP_STRUCT_SByteStorage_FWDDECL
#include <Modloader/app/structs/SByteStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SByteStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByteStorage_DEFINED) && !defined(IL2CPP_STRUCT_SByteStorage_FWDDECL)
#include <Modloader/app/structs/SByteStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SByteStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
