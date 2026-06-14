#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderTimeUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderTimeUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderTimeUtils_DEFINED)
#define IL2CPP_STRUCT_ShaderTimeUtils_DEFINED
struct ShaderTimeUtils__Class;
struct ShaderTimeUtils {
    struct ShaderTimeUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderTimeUtils_FWDDECL)
#define IL2CPP_STRUCT_ShaderTimeUtils_FWDDECL
#include <Modloader/app/structs/ShaderTimeUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderTimeUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderTimeUtils_DEFINED) && !defined(IL2CPP_STRUCT_ShaderTimeUtils_FWDDECL)
#include <Modloader/app/structs/ShaderTimeUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderTimeUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
