#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollection_DEFINED)
#include <Modloader/app/structs/UberStateCollection__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateCollection_DEFINED
struct UberStateCollection__Class;
struct UberStateCollection {
    struct UberStateCollection__Class* klass;
    MonitorData* monitor;
    struct UberStateCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateCollection_FWDDECL)
#define IL2CPP_STRUCT_UberStateCollection_FWDDECL
#include <Modloader/app/structs/UberStateCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollection_DEFINED) && !defined(IL2CPP_STRUCT_UberStateCollection_FWDDECL)
#include <Modloader/app/structs/UberStateCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
