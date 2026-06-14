#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallingRocksGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallingRocksGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_DEFINED)
#include <Modloader/app/structs/FallingRocksGroup__Fields.h>
#if defined(IL2CPP_STRUCT_FallingRocksGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_FallingRocksGroup_DEFINED
struct FallingRocksGroup__Class;
struct FallingRocksGroup {
    struct FallingRocksGroup__Class* klass;
    MonitorData* monitor;
    struct FallingRocksGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_FWDDECL)
#define IL2CPP_STRUCT_FallingRocksGroup_FWDDECL
#include <Modloader/app/structs/FallingRocksGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_FallingRocksGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_DEFINED) && !defined(IL2CPP_STRUCT_FallingRocksGroup_FWDDECL)
#include <Modloader/app/structs/FallingRocksGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallingRocksGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
