#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderPrewarmer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderPrewarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer_DEFINED)
#include <Modloader/app/structs/UberShaderPrewarmer__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderPrewarmer__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderPrewarmer_DEFINED
struct UberShaderPrewarmer__Class;
struct UberShaderPrewarmer {
    struct UberShaderPrewarmer__Class* klass;
    MonitorData* monitor;
    struct UberShaderPrewarmer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer_FWDDECL)
#define IL2CPP_STRUCT_UberShaderPrewarmer_FWDDECL
#include <Modloader/app/structs/UberShaderPrewarmer__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderPrewarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderPrewarmer_FWDDECL)
#include <Modloader/app/structs/UberShaderPrewarmer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderPrewarmer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
