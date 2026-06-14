#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallingRocksArea_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallingRocksArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksArea_DEFINED)
#include <Modloader/app/structs/FallingRocksArea__Fields.h>
#if defined(IL2CPP_STRUCT_FallingRocksArea__Fields_DEFINED)
#define IL2CPP_STRUCT_FallingRocksArea_DEFINED
struct FallingRocksArea__Class;
struct FallingRocksArea {
    struct FallingRocksArea__Class* klass;
    MonitorData* monitor;
    struct FallingRocksArea__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallingRocksArea_FWDDECL)
#define IL2CPP_STRUCT_FallingRocksArea_FWDDECL
#include <Modloader/app/structs/FallingRocksArea__Class.h>
#endif
#undef IL2CPP_STRUCT_FallingRocksArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksArea_DEFINED) && !defined(IL2CPP_STRUCT_FallingRocksArea_FWDDECL)
#include <Modloader/app/structs/FallingRocksArea.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallingRocksArea.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
