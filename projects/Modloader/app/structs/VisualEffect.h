#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VisualEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VisualEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisualEffect_DEFINED)
#include <Modloader/app/structs/VisualEffect__Fields.h>
#if defined(IL2CPP_STRUCT_VisualEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_VisualEffect_DEFINED
struct VisualEffect__Class;
struct VisualEffect {
    struct VisualEffect__Class* klass;
    MonitorData* monitor;
    struct VisualEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VisualEffect_FWDDECL)
#define IL2CPP_STRUCT_VisualEffect_FWDDECL
#include <Modloader/app/structs/VisualEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_VisualEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisualEffect_DEFINED) && !defined(IL2CPP_STRUCT_VisualEffect_FWDDECL)
#include <Modloader/app/structs/VisualEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VisualEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
