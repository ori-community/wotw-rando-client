#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GCFinalizerTablePrewarm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GCFinalizerTablePrewarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm_DEFINED)
#include <Modloader/app/structs/GCFinalizerTablePrewarm__Fields.h>
#if defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_DEFINED)
#define IL2CPP_STRUCT_GCFinalizerTablePrewarm_DEFINED
struct GCFinalizerTablePrewarm__Class;
struct GCFinalizerTablePrewarm {
    struct GCFinalizerTablePrewarm__Class* klass;
    MonitorData* monitor;
    struct GCFinalizerTablePrewarm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm_FWDDECL)
#define IL2CPP_STRUCT_GCFinalizerTablePrewarm_FWDDECL
#include <Modloader/app/structs/GCFinalizerTablePrewarm__Class.h>
#endif
#undef IL2CPP_STRUCT_GCFinalizerTablePrewarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm_DEFINED) && !defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm_FWDDECL)
#include <Modloader/app/structs/GCFinalizerTablePrewarm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GCFinalizerTablePrewarm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
