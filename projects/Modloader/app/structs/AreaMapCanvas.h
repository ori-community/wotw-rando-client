#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapCanvas_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapCanvas_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapCanvas_DEFINED)
#include <Modloader/app/structs/AreaMapCanvas__Fields.h>
#if defined(IL2CPP_STRUCT_AreaMapCanvas__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapCanvas_DEFINED
struct AreaMapCanvas__Class;
struct AreaMapCanvas {
    struct AreaMapCanvas__Class* klass;
    MonitorData* monitor;
    struct AreaMapCanvas__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapCanvas_FWDDECL)
#define IL2CPP_STRUCT_AreaMapCanvas_FWDDECL
#include <Modloader/app/structs/AreaMapCanvas__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaMapCanvas_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapCanvas_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapCanvas_FWDDECL)
#include <Modloader/app/structs/AreaMapCanvas.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapCanvas.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
