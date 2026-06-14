#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_DEFINED)
#include <Modloader/app/structs/ExpandoObject__Fields.h>
#if defined(IL2CPP_STRUCT_ExpandoObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandoObject_DEFINED
struct ExpandoObject__Class;
struct ExpandoObject {
    struct ExpandoObject__Class* klass;
    MonitorData* monitor;
    struct ExpandoObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpandoObject_FWDDECL)
#define IL2CPP_STRUCT_ExpandoObject_FWDDECL
#include <Modloader/app/structs/ExpandoObject__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpandoObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoObject_FWDDECL)
#include <Modloader/app/structs/ExpandoObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
