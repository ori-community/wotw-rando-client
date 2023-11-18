#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameAttribute_DEFINED)
#include <Modloader/app/structs/NameAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NameAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NameAttribute_DEFINED
struct NameAttribute__Class;
struct NameAttribute {
    struct NameAttribute__Class* klass;
    MonitorData* monitor;
    struct NameAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameAttribute_FWDDECL)
#define IL2CPP_STRUCT_NameAttribute_FWDDECL
#include <Modloader/app/structs/NameAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NameAttribute_FWDDECL)
#include <Modloader/app/structs/NameAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
