#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderKeyword_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderKeyword_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderKeyword_DEFINED)
#define IL2CPP_STRUCT_ShaderKeyword_DEFINED
struct ShaderKeyword__Class;
struct ShaderKeyword {
    struct ShaderKeyword__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderKeyword_FWDDECL)
#define IL2CPP_STRUCT_ShaderKeyword_FWDDECL
#include <Modloader/app/structs/ShaderKeyword__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderKeyword_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderKeyword_DEFINED) && !defined(IL2CPP_STRUCT_ShaderKeyword_FWDDECL)
#include <Modloader/app/structs/ShaderKeyword.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderKeyword.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
