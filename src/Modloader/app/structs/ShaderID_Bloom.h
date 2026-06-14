#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_Bloom_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_Bloom_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_Bloom_DEFINED)
#define IL2CPP_STRUCT_ShaderID_Bloom_DEFINED
struct ShaderID_Bloom__Class;
struct ShaderID_Bloom {
    struct ShaderID_Bloom__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_Bloom_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_Bloom_FWDDECL
#include <Modloader/app/structs/ShaderID_Bloom__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderID_Bloom_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_Bloom_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_Bloom_FWDDECL)
#include <Modloader/app/structs/ShaderID_Bloom.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_Bloom.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
