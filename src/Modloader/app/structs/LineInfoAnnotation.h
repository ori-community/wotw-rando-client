#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineInfoAnnotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineInfoAnnotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineInfoAnnotation_DEFINED)
#include <Modloader/app/structs/LineInfoAnnotation__Fields.h>
#if defined(IL2CPP_STRUCT_LineInfoAnnotation__Fields_DEFINED)
#define IL2CPP_STRUCT_LineInfoAnnotation_DEFINED
struct LineInfoAnnotation__Class;
struct LineInfoAnnotation {
    struct LineInfoAnnotation__Class* klass;
    MonitorData* monitor;
    struct LineInfoAnnotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineInfoAnnotation_FWDDECL)
#define IL2CPP_STRUCT_LineInfoAnnotation_FWDDECL
#include <Modloader/app/structs/LineInfoAnnotation__Class.h>
#endif
#undef IL2CPP_STRUCT_LineInfoAnnotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineInfoAnnotation_DEFINED) && !defined(IL2CPP_STRUCT_LineInfoAnnotation_FWDDECL)
#include <Modloader/app/structs/LineInfoAnnotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineInfoAnnotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
