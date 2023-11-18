#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeConstantAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeConstantAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeConstantAttribute_DEFINED)
#include <Modloader/app/structs/DateTimeConstantAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DateTimeConstantAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DateTimeConstantAttribute_DEFINED
struct DateTimeConstantAttribute__Class;
struct DateTimeConstantAttribute {
    struct DateTimeConstantAttribute__Class* klass;
    MonitorData* monitor;
    struct DateTimeConstantAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeConstantAttribute_FWDDECL)
#define IL2CPP_STRUCT_DateTimeConstantAttribute_FWDDECL
#include <Modloader/app/structs/DateTimeConstantAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeConstantAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeConstantAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeConstantAttribute_FWDDECL)
#include <Modloader/app/structs/DateTimeConstantAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeConstantAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
