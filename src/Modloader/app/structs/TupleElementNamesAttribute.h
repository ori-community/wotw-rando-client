#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TupleElementNamesAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TupleElementNamesAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TupleElementNamesAttribute_DEFINED)
#include <Modloader/app/structs/TupleElementNamesAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TupleElementNamesAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TupleElementNamesAttribute_DEFINED
struct TupleElementNamesAttribute__Class;
struct TupleElementNamesAttribute {
    struct TupleElementNamesAttribute__Class* klass;
    MonitorData* monitor;
    struct TupleElementNamesAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TupleElementNamesAttribute_FWDDECL)
#define IL2CPP_STRUCT_TupleElementNamesAttribute_FWDDECL
#include <Modloader/app/structs/TupleElementNamesAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TupleElementNamesAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TupleElementNamesAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TupleElementNamesAttribute_FWDDECL)
#include <Modloader/app/structs/TupleElementNamesAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TupleElementNamesAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
