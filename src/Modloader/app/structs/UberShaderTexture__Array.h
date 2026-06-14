#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderTexture__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderTexture__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderTexture__Array_DEFINED)
#define IL2CPP_STRUCT_UberShaderTexture__Array_DEFINED
struct UberShaderTexture__Array__Class;
struct UberShaderTexture;
struct UberShaderTexture__Array {
    struct UberShaderTexture__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct UberShaderTexture* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderTexture__Array_FWDDECL)
#define IL2CPP_STRUCT_UberShaderTexture__Array_FWDDECL
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderTexture__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderTexture__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderTexture__Array_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderTexture__Array_FWDDECL)
#include <Modloader/app/structs/UberShaderTexture__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderTexture__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
