#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SketchupLayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SketchupLayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SketchupLayer_DEFINED)
#include <Modloader/app/structs/SketchupLayer__Fields.h>
#if defined(IL2CPP_STRUCT_SketchupLayer__Fields_DEFINED)
#define IL2CPP_STRUCT_SketchupLayer_DEFINED
struct SketchupLayer__Class;
struct SketchupLayer {
    struct SketchupLayer__Class* klass;
    MonitorData* monitor;
    struct SketchupLayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SketchupLayer_FWDDECL)
#define IL2CPP_STRUCT_SketchupLayer_FWDDECL
#include <Modloader/app/structs/SketchupLayer__Class.h>
#endif
#undef IL2CPP_STRUCT_SketchupLayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SketchupLayer_DEFINED) && !defined(IL2CPP_STRUCT_SketchupLayer_FWDDECL)
#include <Modloader/app/structs/SketchupLayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SketchupLayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
