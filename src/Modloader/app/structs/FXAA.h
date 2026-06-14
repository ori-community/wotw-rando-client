#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_DEFINED)
#include <Modloader/app/structs/FXAA__Fields.h>
#if defined(IL2CPP_STRUCT_FXAA__Fields_DEFINED)
#define IL2CPP_STRUCT_FXAA_DEFINED
struct FXAA__Class;
struct FXAA {
    struct FXAA__Class* klass;
    MonitorData* monitor;
    struct FXAA__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAA_FWDDECL)
#define IL2CPP_STRUCT_FXAA_FWDDECL
#include <Modloader/app/structs/FXAA__Class.h>
#endif
#undef IL2CPP_STRUCT_FXAA_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_FWDDECL)
#include <Modloader/app/structs/FXAA.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
