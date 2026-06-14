#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectHolderList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectHolderList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectHolderList_DEFINED)
#include <Modloader/app/structs/ObjectHolderList__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectHolderList__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectHolderList_DEFINED
struct ObjectHolderList__Class;
struct ObjectHolderList {
    struct ObjectHolderList__Class* klass;
    MonitorData* monitor;
    struct ObjectHolderList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectHolderList_FWDDECL)
#define IL2CPP_STRUCT_ObjectHolderList_FWDDECL
#include <Modloader/app/structs/ObjectHolderList__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectHolderList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectHolderList_DEFINED) && !defined(IL2CPP_STRUCT_ObjectHolderList_FWDDECL)
#include <Modloader/app/structs/ObjectHolderList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectHolderList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
