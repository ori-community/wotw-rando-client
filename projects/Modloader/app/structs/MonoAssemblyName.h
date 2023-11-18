#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoAssemblyName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoAssemblyName_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAssemblyName_DEFINED)
#include <Modloader/app/structs/MonoAssemblyName_public_key_token_e_FixedBuffer.h>
#if defined(IL2CPP_STRUCT_MonoAssemblyName_public_key_token_e_FixedBuffer_DEFINED)
#define IL2CPP_STRUCT_MonoAssemblyName_DEFINED
struct MonoAssemblyName {
    void* name;
    void* culture;
    void* hash_value;
    void* public_key;
    struct MonoAssemblyName_public_key_token_e_FixedBuffer public_key_token;
    uint32_t hash_alg;
    uint32_t hash_len;
    uint32_t flags;
    uint16_t major;
    uint16_t minor;
    uint16_t build;
    uint16_t revision;
    uint16_t arch;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoAssemblyName_FWDDECL)
#define IL2CPP_STRUCT_MonoAssemblyName_FWDDECL
#endif
#undef IL2CPP_STRUCT_MonoAssemblyName_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAssemblyName_DEFINED) && !defined(IL2CPP_STRUCT_MonoAssemblyName_FWDDECL)
#include <Modloader/app/structs/MonoAssemblyName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoAssemblyName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
