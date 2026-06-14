#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsRendererVisible_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsRendererVisible_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsRendererVisible_DEFINED)
#include <Modloader/app/structs/IsRendererVisible__Fields.h>
#if defined(IL2CPP_STRUCT_IsRendererVisible__Fields_DEFINED)
#define IL2CPP_STRUCT_IsRendererVisible_DEFINED
struct IsRendererVisible__Class;
struct IsRendererVisible {
    struct IsRendererVisible__Class* klass;
    MonitorData* monitor;
    struct IsRendererVisible__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsRendererVisible_FWDDECL)
#define IL2CPP_STRUCT_IsRendererVisible_FWDDECL
#include <Modloader/app/structs/IsRendererVisible__Class.h>
#endif
#undef IL2CPP_STRUCT_IsRendererVisible_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsRendererVisible_DEFINED) && !defined(IL2CPP_STRUCT_IsRendererVisible_FWDDECL)
#include <Modloader/app/structs/IsRendererVisible.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsRendererVisible.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
