#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_DEFINED)
#include <Modloader/app/structs/ArrayList_ReadOnlyArrayList__Fields.h>
#if defined(IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList__Fields_DEFINED)
#define IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_DEFINED
struct ArrayList_ReadOnlyArrayList__Class;
struct ArrayList_ReadOnlyArrayList {
    struct ArrayList_ReadOnlyArrayList__Class* klass;
    MonitorData* monitor;
    struct ArrayList_ReadOnlyArrayList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_FWDDECL)
#define IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_FWDDECL
#include <Modloader/app/structs/ArrayList_ReadOnlyArrayList__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_DEFINED) && !defined(IL2CPP_STRUCT_ArrayList_ReadOnlyArrayList_FWDDECL)
#include <Modloader/app/structs/ArrayList_ReadOnlyArrayList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayList_ReadOnlyArrayList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
