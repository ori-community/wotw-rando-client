#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateCollectionGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateCollectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollectionGroup_DEFINED)
#include <Modloader/app/structs/UberStateCollectionGroup__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateCollectionGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateCollectionGroup_DEFINED
struct UberStateCollectionGroup__Class;
struct UberStateCollectionGroup {
    struct UberStateCollectionGroup__Class* klass;
    MonitorData* monitor;
    struct UberStateCollectionGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateCollectionGroup_FWDDECL)
#define IL2CPP_STRUCT_UberStateCollectionGroup_FWDDECL
#include <Modloader/app/structs/UberStateCollectionGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateCollectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollectionGroup_DEFINED) && !defined(IL2CPP_STRUCT_UberStateCollectionGroup_FWDDECL)
#include <Modloader/app/structs/UberStateCollectionGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateCollectionGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
