#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_JProperty_DEFINED)
#include <Modloader/app/structs/JProperty__Fields.h>
#if defined(IL2CPP_STRUCT_JProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_JProperty_DEFINED
struct JProperty__Class;
struct JProperty {
    struct JProperty__Class* klass;
    MonitorData* monitor;
    struct JProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JProperty_FWDDECL)
#define IL2CPP_STRUCT_JProperty_FWDDECL
#include <Modloader/app/structs/JProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_JProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_JProperty_DEFINED) && !defined(IL2CPP_STRUCT_JProperty_FWDDECL)
#include <Modloader/app/structs/JProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
