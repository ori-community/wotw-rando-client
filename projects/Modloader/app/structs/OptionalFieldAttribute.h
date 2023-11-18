#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionalFieldAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionalFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalFieldAttribute_DEFINED)
#include <Modloader/app/structs/OptionalFieldAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_OptionalFieldAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_OptionalFieldAttribute_DEFINED
struct OptionalFieldAttribute__Class;
struct OptionalFieldAttribute {
    struct OptionalFieldAttribute__Class* klass;
    MonitorData* monitor;
    struct OptionalFieldAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OptionalFieldAttribute_FWDDECL)
#define IL2CPP_STRUCT_OptionalFieldAttribute_FWDDECL
#include <Modloader/app/structs/OptionalFieldAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_OptionalFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalFieldAttribute_DEFINED) && !defined(IL2CPP_STRUCT_OptionalFieldAttribute_FWDDECL)
#include <Modloader/app/structs/OptionalFieldAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionalFieldAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
