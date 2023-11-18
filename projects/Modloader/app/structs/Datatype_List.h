#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_List_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_List_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_List_DEFINED)
#include <Modloader/app/structs/Datatype_List__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_List__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_List_DEFINED
struct Datatype_List__Class;
struct Datatype_List {
    struct Datatype_List__Class* klass;
    MonitorData* monitor;
    struct Datatype_List__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_List_FWDDECL)
#define IL2CPP_STRUCT_Datatype_List_FWDDECL
#include <Modloader/app/structs/Datatype_List__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_List_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_List_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_List_FWDDECL)
#include <Modloader/app/structs/Datatype_List.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_List.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
