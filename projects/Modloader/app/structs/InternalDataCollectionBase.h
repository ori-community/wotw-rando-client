#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalDataCollectionBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalDataCollectionBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalDataCollectionBase_DEFINED)
#define IL2CPP_STRUCT_InternalDataCollectionBase_DEFINED
struct InternalDataCollectionBase__Class;
struct InternalDataCollectionBase {
    struct InternalDataCollectionBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InternalDataCollectionBase_FWDDECL)
#define IL2CPP_STRUCT_InternalDataCollectionBase_FWDDECL
#include <Modloader/app/structs/InternalDataCollectionBase__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalDataCollectionBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalDataCollectionBase_DEFINED) && !defined(IL2CPP_STRUCT_InternalDataCollectionBase_FWDDECL)
#include <Modloader/app/structs/InternalDataCollectionBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalDataCollectionBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
