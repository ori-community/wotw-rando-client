#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCompiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCompiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCompiler_DEFINED)
#include <Modloader/app/structs/LightCompiler__Fields.h>
#if defined(IL2CPP_STRUCT_LightCompiler__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCompiler_DEFINED
struct LightCompiler__Class;
struct LightCompiler {
    struct LightCompiler__Class* klass;
    MonitorData* monitor;
    struct LightCompiler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCompiler_FWDDECL)
#define IL2CPP_STRUCT_LightCompiler_FWDDECL
#include <Modloader/app/structs/LightCompiler__Class.h>
#endif
#undef IL2CPP_STRUCT_LightCompiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCompiler_DEFINED) && !defined(IL2CPP_STRUCT_LightCompiler_FWDDECL)
#include <Modloader/app/structs/LightCompiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCompiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
