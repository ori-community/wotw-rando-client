#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderPrewarmerProgress_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderPrewarmerProgress_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmerProgress_DEFINED)
#include <Modloader/app/structs/UberShaderPrewarmerProgress__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderPrewarmerProgress__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderPrewarmerProgress_DEFINED
struct UberShaderPrewarmerProgress__Class;
struct UberShaderPrewarmerProgress {
    struct UberShaderPrewarmerProgress__Class* klass;
    MonitorData* monitor;
    struct UberShaderPrewarmerProgress__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmerProgress_FWDDECL)
#define IL2CPP_STRUCT_UberShaderPrewarmerProgress_FWDDECL
#include <Modloader/app/structs/UberShaderPrewarmerProgress__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderPrewarmerProgress_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmerProgress_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderPrewarmerProgress_FWDDECL)
#include <Modloader/app/structs/UberShaderPrewarmerProgress.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderPrewarmerProgress.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
