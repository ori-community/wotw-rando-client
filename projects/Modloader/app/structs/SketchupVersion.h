#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SketchupVersion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SketchupVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SketchupVersion_DEFINED)
#include <Modloader/app/structs/SketchupVersion__Fields.h>
#if defined(IL2CPP_STRUCT_SketchupVersion__Fields_DEFINED)
#define IL2CPP_STRUCT_SketchupVersion_DEFINED
struct SketchupVersion__Class;
struct SketchupVersion {
    struct SketchupVersion__Class* klass;
    MonitorData* monitor;
    struct SketchupVersion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SketchupVersion_FWDDECL)
#define IL2CPP_STRUCT_SketchupVersion_FWDDECL
#include <Modloader/app/structs/SketchupVersion__Class.h>
#endif
#undef IL2CPP_STRUCT_SketchupVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SketchupVersion_DEFINED) && !defined(IL2CPP_STRUCT_SketchupVersion_FWDDECL)
#include <Modloader/app/structs/SketchupVersion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SketchupVersion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
