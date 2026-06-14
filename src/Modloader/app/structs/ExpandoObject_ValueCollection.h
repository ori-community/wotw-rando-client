#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoObject_ValueCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoObject_ValueCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_ValueCollection_DEFINED)
#include <Modloader/app/structs/ExpandoObject_ValueCollection__Fields.h>
#if defined(IL2CPP_STRUCT_ExpandoObject_ValueCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandoObject_ValueCollection_DEFINED
struct ExpandoObject_ValueCollection__Class;
struct ExpandoObject_ValueCollection {
    struct ExpandoObject_ValueCollection__Class* klass;
    MonitorData* monitor;
    struct ExpandoObject_ValueCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpandoObject_ValueCollection_FWDDECL)
#define IL2CPP_STRUCT_ExpandoObject_ValueCollection_FWDDECL
#include <Modloader/app/structs/ExpandoObject_ValueCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpandoObject_ValueCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_ValueCollection_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoObject_ValueCollection_FWDDECL)
#include <Modloader/app/structs/ExpandoObject_ValueCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoObject_ValueCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
