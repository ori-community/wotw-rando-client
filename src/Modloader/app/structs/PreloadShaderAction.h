#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreloadShaderAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreloadShaderAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadShaderAction_DEFINED)
#include <Modloader/app/structs/PreloadShaderAction__Fields.h>
#if defined(IL2CPP_STRUCT_PreloadShaderAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PreloadShaderAction_DEFINED
struct PreloadShaderAction__Class;
struct PreloadShaderAction {
    struct PreloadShaderAction__Class* klass;
    MonitorData* monitor;
    struct PreloadShaderAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreloadShaderAction_FWDDECL)
#define IL2CPP_STRUCT_PreloadShaderAction_FWDDECL
#include <Modloader/app/structs/PreloadShaderAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PreloadShaderAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadShaderAction_DEFINED) && !defined(IL2CPP_STRUCT_PreloadShaderAction_FWDDECL)
#include <Modloader/app/structs/PreloadShaderAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreloadShaderAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
