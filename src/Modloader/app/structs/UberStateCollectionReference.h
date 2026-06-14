#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateCollectionReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateCollectionReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollectionReference_DEFINED)
#include <Modloader/app/structs/UberStateCollectionReference__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateCollectionReference__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateCollectionReference_DEFINED
struct UberStateCollectionReference__Class;
struct UberStateCollectionReference {
    struct UberStateCollectionReference__Class* klass;
    MonitorData* monitor;
    struct UberStateCollectionReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateCollectionReference_FWDDECL)
#define IL2CPP_STRUCT_UberStateCollectionReference_FWDDECL
#include <Modloader/app/structs/UberStateCollectionReference__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateCollectionReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollectionReference_DEFINED) && !defined(IL2CPP_STRUCT_UberStateCollectionReference_FWDDECL)
#include <Modloader/app/structs/UberStateCollectionReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateCollectionReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
