#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRootDesigner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRootDesigner_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRootDesigner_DEFINED)
#define IL2CPP_STRUCT_IRootDesigner_DEFINED
struct IRootDesigner__Class;
struct IRootDesigner {
    struct IRootDesigner__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRootDesigner_FWDDECL)
#define IL2CPP_STRUCT_IRootDesigner_FWDDECL
#include <Modloader/app/structs/IRootDesigner__Class.h>
#endif
#undef IL2CPP_STRUCT_IRootDesigner_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRootDesigner_DEFINED) && !defined(IL2CPP_STRUCT_IRootDesigner_FWDDECL)
#include <Modloader/app/structs/IRootDesigner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRootDesigner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
