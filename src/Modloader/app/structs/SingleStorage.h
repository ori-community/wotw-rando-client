#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SingleStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SingleStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleStorage_DEFINED)
#include <Modloader/app/structs/SingleStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SingleStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SingleStorage_DEFINED
struct SingleStorage__Class;
struct SingleStorage {
    struct SingleStorage__Class* klass;
    MonitorData* monitor;
    struct SingleStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SingleStorage_FWDDECL)
#define IL2CPP_STRUCT_SingleStorage_FWDDECL
#include <Modloader/app/structs/SingleStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SingleStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleStorage_DEFINED) && !defined(IL2CPP_STRUCT_SingleStorage_FWDDECL)
#include <Modloader/app/structs/SingleStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SingleStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
