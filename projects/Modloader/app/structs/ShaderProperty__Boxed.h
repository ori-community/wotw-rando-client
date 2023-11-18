#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderProperty__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderProperty__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderProperty__Boxed_DEFINED)
#include <Modloader/app/structs/ShaderProperty.h>
#if defined(IL2CPP_STRUCT_ShaderProperty_DEFINED)
#define IL2CPP_STRUCT_ShaderProperty__Boxed_DEFINED
struct ShaderProperty__Class;
struct ShaderProperty__Boxed {
    struct ShaderProperty__Class* klass;
    MonitorData* monitor;
    struct ShaderProperty fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShaderProperty__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ShaderProperty__Boxed_FWDDECL
#include <Modloader/app/structs/ShaderProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderProperty__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderProperty__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ShaderProperty__Boxed_FWDDECL)
#include <Modloader/app/structs/ShaderProperty__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderProperty__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
