#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameObjectCollectionBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameObjectCollectionBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameObjectCollectionBase_DEFINED)
#include <Modloader/app/structs/NameObjectCollectionBase__Fields.h>
#if defined(IL2CPP_STRUCT_NameObjectCollectionBase__Fields_DEFINED)
#define IL2CPP_STRUCT_NameObjectCollectionBase_DEFINED
struct NameObjectCollectionBase__Class;
struct NameObjectCollectionBase {
    struct NameObjectCollectionBase__Class* klass;
    MonitorData* monitor;
    struct NameObjectCollectionBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameObjectCollectionBase_FWDDECL)
#define IL2CPP_STRUCT_NameObjectCollectionBase_FWDDECL
#include <Modloader/app/structs/NameObjectCollectionBase__Class.h>
#endif
#undef IL2CPP_STRUCT_NameObjectCollectionBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameObjectCollectionBase_DEFINED) && !defined(IL2CPP_STRUCT_NameObjectCollectionBase_FWDDECL)
#include <Modloader/app/structs/NameObjectCollectionBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameObjectCollectionBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
