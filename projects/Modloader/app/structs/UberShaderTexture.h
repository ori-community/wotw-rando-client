#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderTexture_DEFINED)
#include <Modloader/app/structs/UberShaderTexture__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderTexture__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderTexture_DEFINED
struct UberShaderTexture__Class;
struct UberShaderTexture {
    struct UberShaderTexture__Class* klass;
    MonitorData* monitor;
    struct UberShaderTexture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderTexture_FWDDECL)
#define IL2CPP_STRUCT_UberShaderTexture_FWDDECL
#include <Modloader/app/structs/UberShaderTexture__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderTexture_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderTexture_FWDDECL)
#include <Modloader/app/structs/UberShaderTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
