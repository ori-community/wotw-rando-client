#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreAttribute_DEFINED)
#include <Modloader/app/structs/IgnoreAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_IgnoreAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_IgnoreAttribute_DEFINED
struct IgnoreAttribute__Class;
struct IgnoreAttribute {
    struct IgnoreAttribute__Class* klass;
    MonitorData* monitor;
    struct IgnoreAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IgnoreAttribute_FWDDECL)
#define IL2CPP_STRUCT_IgnoreAttribute_FWDDECL
#include <Modloader/app/structs/IgnoreAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_IgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreAttribute_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreAttribute_FWDDECL)
#include <Modloader/app/structs/IgnoreAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
