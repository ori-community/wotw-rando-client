#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateValueStore_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateValueStore_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueStore_DEFINED)
#include <Modloader/app/structs/UberStateValueStore__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateValueStore__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateValueStore_DEFINED
struct UberStateValueStore__Class;
struct UberStateValueStore {
    struct UberStateValueStore__Class* klass;
    MonitorData* monitor;
    struct UberStateValueStore__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateValueStore_FWDDECL)
#define IL2CPP_STRUCT_UberStateValueStore_FWDDECL
#include <Modloader/app/structs/UberStateValueStore__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateValueStore_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueStore_DEFINED) && !defined(IL2CPP_STRUCT_UberStateValueStore_FWDDECL)
#include <Modloader/app/structs/UberStateValueStore.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateValueStore.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
