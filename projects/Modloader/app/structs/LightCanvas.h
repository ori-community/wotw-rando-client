#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_DEFINED)
#include <Modloader/app/structs/LightCanvas__Fields.h>
#if defined(IL2CPP_STRUCT_LightCanvas__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCanvas_DEFINED
struct LightCanvas__Class;
struct LightCanvas {
    struct LightCanvas__Class* klass;
    MonitorData* monitor;
    struct LightCanvas__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas_FWDDECL
#include <Modloader/app/structs/LightCanvas__Class.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas_FWDDECL)
#include <Modloader/app/structs/LightCanvas.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
