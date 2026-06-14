#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultValueAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultValueAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultValueAttribute_DEFINED)
#include <Modloader/app/structs/DefaultValueAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultValueAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultValueAttribute_DEFINED
struct DefaultValueAttribute__Class;
struct DefaultValueAttribute {
    struct DefaultValueAttribute__Class* klass;
    MonitorData* monitor;
    struct DefaultValueAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultValueAttribute_FWDDECL)
#define IL2CPP_STRUCT_DefaultValueAttribute_FWDDECL
#include <Modloader/app/structs/DefaultValueAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultValueAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultValueAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DefaultValueAttribute_FWDDECL)
#include <Modloader/app/structs/DefaultValueAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultValueAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
