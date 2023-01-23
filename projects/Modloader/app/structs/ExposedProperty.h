#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExposedProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExposedProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedProperty_DEFINED)
#include <Modloader/app/structs/ExposedProperty__Fields.h>
#if defined(IL2CPP_STRUCT_ExposedProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_ExposedProperty_DEFINED
struct ExposedProperty__Class;
struct ExposedProperty {
    struct ExposedProperty__Class* klass;
    MonitorData* monitor;
    struct ExposedProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExposedProperty_FWDDECL)
#define IL2CPP_STRUCT_ExposedProperty_FWDDECL
#include <Modloader/app/structs/ExposedProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_ExposedProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedProperty_DEFINED) && !defined(IL2CPP_STRUCT_ExposedProperty_FWDDECL)
#include <Modloader/app/structs/ExposedProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExposedProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
