#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadOnlyCollectionBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadOnlyCollectionBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadOnlyCollectionBase_DEFINED)
#include <Modloader/app/structs/ReadOnlyCollectionBase__Fields.h>
#if defined(IL2CPP_STRUCT_ReadOnlyCollectionBase__Fields_DEFINED)
#define IL2CPP_STRUCT_ReadOnlyCollectionBase_DEFINED
struct ReadOnlyCollectionBase__Class;
struct ReadOnlyCollectionBase {
    struct ReadOnlyCollectionBase__Class* klass;
    MonitorData* monitor;
    struct ReadOnlyCollectionBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadOnlyCollectionBase_FWDDECL)
#define IL2CPP_STRUCT_ReadOnlyCollectionBase_FWDDECL
#include <Modloader/app/structs/ReadOnlyCollectionBase__Class.h>
#endif
#undef IL2CPP_STRUCT_ReadOnlyCollectionBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadOnlyCollectionBase_DEFINED) && !defined(IL2CPP_STRUCT_ReadOnlyCollectionBase_FWDDECL)
#include <Modloader/app/structs/ReadOnlyCollectionBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadOnlyCollectionBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
