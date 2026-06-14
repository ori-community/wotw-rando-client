#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProvidePropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProvidePropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProvidePropertyAttribute_DEFINED)
#include <Modloader/app/structs/ProvidePropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ProvidePropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ProvidePropertyAttribute_DEFINED
struct ProvidePropertyAttribute__Class;
struct ProvidePropertyAttribute {
    struct ProvidePropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct ProvidePropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProvidePropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_ProvidePropertyAttribute_FWDDECL
#include <Modloader/app/structs/ProvidePropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ProvidePropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProvidePropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ProvidePropertyAttribute_FWDDECL)
#include <Modloader/app/structs/ProvidePropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProvidePropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
