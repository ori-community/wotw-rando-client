#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultPropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultPropertyAttribute_DEFINED)
#include <Modloader/app/structs/DefaultPropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultPropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultPropertyAttribute_DEFINED
struct DefaultPropertyAttribute__Class;
struct DefaultPropertyAttribute {
    struct DefaultPropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct DefaultPropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultPropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_DefaultPropertyAttribute_FWDDECL
#include <Modloader/app/structs/DefaultPropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultPropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DefaultPropertyAttribute_FWDDECL)
#include <Modloader/app/structs/DefaultPropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultPropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
