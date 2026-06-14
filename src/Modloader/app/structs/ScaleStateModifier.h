#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleStateModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleStateModifier_DEFINED)
#include <Modloader/app/structs/ScaleStateModifier__Fields.h>
#if defined(IL2CPP_STRUCT_ScaleStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_ScaleStateModifier_DEFINED
struct ScaleStateModifier__Class;
struct ScaleStateModifier {
    struct ScaleStateModifier__Class* klass;
    MonitorData* monitor;
    struct ScaleStateModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleStateModifier_FWDDECL)
#define IL2CPP_STRUCT_ScaleStateModifier_FWDDECL
#include <Modloader/app/structs/ScaleStateModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_ScaleStateModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleStateModifier_DEFINED) && !defined(IL2CPP_STRUCT_ScaleStateModifier_FWDDECL)
#include <Modloader/app/structs/ScaleStateModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleStateModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
