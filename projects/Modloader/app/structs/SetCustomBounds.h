#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetCustomBounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetCustomBounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCustomBounds_DEFINED)
#include <Modloader/app/structs/SetCustomBounds__Fields.h>
#if defined(IL2CPP_STRUCT_SetCustomBounds__Fields_DEFINED)
#define IL2CPP_STRUCT_SetCustomBounds_DEFINED
struct SetCustomBounds__Class;
struct SetCustomBounds {
    struct SetCustomBounds__Class* klass;
    MonitorData* monitor;
    struct SetCustomBounds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetCustomBounds_FWDDECL)
#define IL2CPP_STRUCT_SetCustomBounds_FWDDECL
#include <Modloader/app/structs/SetCustomBounds__Class.h>
#endif
#undef IL2CPP_STRUCT_SetCustomBounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCustomBounds_DEFINED) && !defined(IL2CPP_STRUCT_SetCustomBounds_FWDDECL)
#include <Modloader/app/structs/SetCustomBounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetCustomBounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
