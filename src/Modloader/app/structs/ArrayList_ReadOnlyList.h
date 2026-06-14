#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayList_ReadOnlyList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayList_ReadOnlyList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_ReadOnlyList_DEFINED)
#include <Modloader/app/structs/ArrayList_ReadOnlyList__Fields.h>
#if defined(IL2CPP_STRUCT_ArrayList_ReadOnlyList__Fields_DEFINED)
#define IL2CPP_STRUCT_ArrayList_ReadOnlyList_DEFINED
struct ArrayList_ReadOnlyList__Class;
struct ArrayList_ReadOnlyList {
    struct ArrayList_ReadOnlyList__Class* klass;
    MonitorData* monitor;
    struct ArrayList_ReadOnlyList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrayList_ReadOnlyList_FWDDECL)
#define IL2CPP_STRUCT_ArrayList_ReadOnlyList_FWDDECL
#include <Modloader/app/structs/ArrayList_ReadOnlyList__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrayList_ReadOnlyList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayList_ReadOnlyList_DEFINED) && !defined(IL2CPP_STRUCT_ArrayList_ReadOnlyList_FWDDECL)
#include <Modloader/app/structs/ArrayList_ReadOnlyList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayList_ReadOnlyList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
