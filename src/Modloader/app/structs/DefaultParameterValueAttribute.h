#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultParameterValueAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultParameterValueAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultParameterValueAttribute_DEFINED)
#include <Modloader/app/structs/DefaultParameterValueAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultParameterValueAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultParameterValueAttribute_DEFINED
struct DefaultParameterValueAttribute__Class;
struct DefaultParameterValueAttribute {
    struct DefaultParameterValueAttribute__Class* klass;
    MonitorData* monitor;
    struct DefaultParameterValueAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultParameterValueAttribute_FWDDECL)
#define IL2CPP_STRUCT_DefaultParameterValueAttribute_FWDDECL
#include <Modloader/app/structs/DefaultParameterValueAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultParameterValueAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultParameterValueAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DefaultParameterValueAttribute_FWDDECL)
#include <Modloader/app/structs/DefaultParameterValueAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultParameterValueAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
