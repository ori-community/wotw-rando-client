#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExposedProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExposedProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedProperties_DEFINED)
#include <Modloader/app/structs/ExposedProperties__Fields.h>
#if defined(IL2CPP_STRUCT_ExposedProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_ExposedProperties_DEFINED
struct ExposedProperties__Class;
struct ExposedProperties {
    struct ExposedProperties__Class* klass;
    MonitorData* monitor;
    struct ExposedProperties__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExposedProperties_FWDDECL)
#define IL2CPP_STRUCT_ExposedProperties_FWDDECL
#include <Modloader/app/structs/ExposedProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_ExposedProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedProperties_DEFINED) && !defined(IL2CPP_STRUCT_ExposedProperties_FWDDECL)
#include <Modloader/app/structs/ExposedProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExposedProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
