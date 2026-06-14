#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoClass_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoClass_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoClass_DEFINED)
#include <Modloader/app/structs/ExpandoClass__Fields.h>
#if defined(IL2CPP_STRUCT_ExpandoClass__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandoClass_DEFINED
struct ExpandoClass__Class;
struct ExpandoClass {
    struct ExpandoClass__Class* klass;
    MonitorData* monitor;
    struct ExpandoClass__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpandoClass_FWDDECL)
#define IL2CPP_STRUCT_ExpandoClass_FWDDECL
#include <Modloader/app/structs/ExpandoClass__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpandoClass_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoClass_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoClass_FWDDECL)
#include <Modloader/app/structs/ExpandoClass.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoClass.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
