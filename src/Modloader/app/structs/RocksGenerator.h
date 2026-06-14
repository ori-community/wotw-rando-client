#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RocksGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RocksGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RocksGenerator_DEFINED)
#include <Modloader/app/structs/RocksGenerator__Fields.h>
#if defined(IL2CPP_STRUCT_RocksGenerator__Fields_DEFINED)
#define IL2CPP_STRUCT_RocksGenerator_DEFINED
struct RocksGenerator__Class;
struct RocksGenerator {
    struct RocksGenerator__Class* klass;
    MonitorData* monitor;
    struct RocksGenerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RocksGenerator_FWDDECL)
#define IL2CPP_STRUCT_RocksGenerator_FWDDECL
#include <Modloader/app/structs/RocksGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_RocksGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RocksGenerator_DEFINED) && !defined(IL2CPP_STRUCT_RocksGenerator_FWDDECL)
#include <Modloader/app/structs/RocksGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RocksGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
