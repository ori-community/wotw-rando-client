#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XObjectChangeAnnotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XObjectChangeAnnotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObjectChangeAnnotation_DEFINED)
#include <Modloader/app/structs/XObjectChangeAnnotation__Fields.h>
#if defined(IL2CPP_STRUCT_XObjectChangeAnnotation__Fields_DEFINED)
#define IL2CPP_STRUCT_XObjectChangeAnnotation_DEFINED
struct XObjectChangeAnnotation__Class;
struct XObjectChangeAnnotation {
    struct XObjectChangeAnnotation__Class* klass;
    MonitorData* monitor;
    struct XObjectChangeAnnotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XObjectChangeAnnotation_FWDDECL)
#define IL2CPP_STRUCT_XObjectChangeAnnotation_FWDDECL
#include <Modloader/app/structs/XObjectChangeAnnotation__Class.h>
#endif
#undef IL2CPP_STRUCT_XObjectChangeAnnotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObjectChangeAnnotation_DEFINED) && !defined(IL2CPP_STRUCT_XObjectChangeAnnotation_FWDDECL)
#include <Modloader/app/structs/XObjectChangeAnnotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XObjectChangeAnnotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
