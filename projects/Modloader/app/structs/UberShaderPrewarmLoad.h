#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderPrewarmLoad_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderPrewarmLoad_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmLoad_DEFINED)
#include <Modloader/app/structs/UberShaderPrewarmLoad__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderPrewarmLoad__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderPrewarmLoad_DEFINED
struct UberShaderPrewarmLoad__Class;
struct UberShaderPrewarmLoad {
    struct UberShaderPrewarmLoad__Class* klass;
    MonitorData* monitor;
    struct UberShaderPrewarmLoad__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmLoad_FWDDECL)
#define IL2CPP_STRUCT_UberShaderPrewarmLoad_FWDDECL
#include <Modloader/app/structs/UberShaderPrewarmLoad__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderPrewarmLoad_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmLoad_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderPrewarmLoad_FWDDECL)
#include <Modloader/app/structs/UberShaderPrewarmLoad.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderPrewarmLoad.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
