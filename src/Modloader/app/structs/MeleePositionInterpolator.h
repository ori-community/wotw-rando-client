#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleePositionInterpolator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleePositionInterpolator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleePositionInterpolator_DEFINED)
#include <Modloader/app/structs/MeleePositionInterpolator__Fields.h>
#if defined(IL2CPP_STRUCT_MeleePositionInterpolator__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleePositionInterpolator_DEFINED
struct MeleePositionInterpolator__Class;
struct MeleePositionInterpolator {
    struct MeleePositionInterpolator__Class* klass;
    MonitorData* monitor;
    struct MeleePositionInterpolator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleePositionInterpolator_FWDDECL)
#define IL2CPP_STRUCT_MeleePositionInterpolator_FWDDECL
#include <Modloader/app/structs/MeleePositionInterpolator__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleePositionInterpolator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleePositionInterpolator_DEFINED) && !defined(IL2CPP_STRUCT_MeleePositionInterpolator_FWDDECL)
#include <Modloader/app/structs/MeleePositionInterpolator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleePositionInterpolator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
