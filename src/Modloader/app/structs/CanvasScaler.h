#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanvasScaler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanvasScaler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasScaler_DEFINED)
#include <Modloader/app/structs/CanvasScaler__Fields.h>
#if defined(IL2CPP_STRUCT_CanvasScaler__Fields_DEFINED)
#define IL2CPP_STRUCT_CanvasScaler_DEFINED
struct CanvasScaler__Class;
struct CanvasScaler {
    struct CanvasScaler__Class* klass;
    MonitorData* monitor;
    struct CanvasScaler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CanvasScaler_FWDDECL)
#define IL2CPP_STRUCT_CanvasScaler_FWDDECL
#include <Modloader/app/structs/CanvasScaler__Class.h>
#endif
#undef IL2CPP_STRUCT_CanvasScaler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasScaler_DEFINED) && !defined(IL2CPP_STRUCT_CanvasScaler_FWDDECL)
#include <Modloader/app/structs/CanvasScaler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanvasScaler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
