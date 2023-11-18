#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseUriAnnotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseUriAnnotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseUriAnnotation_DEFINED)
#include <Modloader/app/structs/BaseUriAnnotation__Fields.h>
#if defined(IL2CPP_STRUCT_BaseUriAnnotation__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseUriAnnotation_DEFINED
struct BaseUriAnnotation__Class;
struct BaseUriAnnotation {
    struct BaseUriAnnotation__Class* klass;
    MonitorData* monitor;
    struct BaseUriAnnotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseUriAnnotation_FWDDECL)
#define IL2CPP_STRUCT_BaseUriAnnotation_FWDDECL
#include <Modloader/app/structs/BaseUriAnnotation__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseUriAnnotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseUriAnnotation_DEFINED) && !defined(IL2CPP_STRUCT_BaseUriAnnotation_FWDDECL)
#include <Modloader/app/structs/BaseUriAnnotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseUriAnnotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
