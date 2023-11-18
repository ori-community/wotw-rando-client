#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_union_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_union_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_union_DEFINED)
#include <Modloader/app/structs/Datatype_union__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_union__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_union_DEFINED
struct Datatype_union__Class;
struct Datatype_union {
    struct Datatype_union__Class* klass;
    MonitorData* monitor;
    struct Datatype_union__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_union_FWDDECL)
#define IL2CPP_STRUCT_Datatype_union_FWDDECL
#include <Modloader/app/structs/Datatype_union__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_union_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_union_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_union_FWDDECL)
#include <Modloader/app/structs/Datatype_union.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_union.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
