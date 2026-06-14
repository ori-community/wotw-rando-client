#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SketchupGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SketchupGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SketchupGroup_DEFINED)
#include <Modloader/app/structs/SketchupGroup__Fields.h>
#if defined(IL2CPP_STRUCT_SketchupGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_SketchupGroup_DEFINED
struct SketchupGroup__Class;
struct SketchupGroup {
    struct SketchupGroup__Class* klass;
    MonitorData* monitor;
    struct SketchupGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SketchupGroup_FWDDECL)
#define IL2CPP_STRUCT_SketchupGroup_FWDDECL
#include <Modloader/app/structs/SketchupGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_SketchupGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SketchupGroup_DEFINED) && !defined(IL2CPP_STRUCT_SketchupGroup_FWDDECL)
#include <Modloader/app/structs/SketchupGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SketchupGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
