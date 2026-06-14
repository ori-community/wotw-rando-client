#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_boolean_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_boolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_boolean_DEFINED)
#include <Modloader/app/structs/Datatype_boolean__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_boolean__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_boolean_DEFINED
struct Datatype_boolean__Class;
struct Datatype_boolean {
    struct Datatype_boolean__Class* klass;
    MonitorData* monitor;
    struct Datatype_boolean__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_boolean_FWDDECL)
#define IL2CPP_STRUCT_Datatype_boolean_FWDDECL
#include <Modloader/app/structs/Datatype_boolean__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_boolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_boolean_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_boolean_FWDDECL)
#include <Modloader/app/structs/Datatype_boolean.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_boolean.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
