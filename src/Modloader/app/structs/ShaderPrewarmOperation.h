#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderPrewarmOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderPrewarmOperation_DEFINED)
#include <Modloader/app/structs/ShaderPrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_ShaderPrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_ShaderPrewarmOperation_DEFINED
struct ShaderPrewarmOperation__Class;
struct ShaderPrewarmOperation {
    struct ShaderPrewarmOperation__Class* klass;
    MonitorData* monitor;
    struct ShaderPrewarmOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShaderPrewarmOperation_FWDDECL)
#define IL2CPP_STRUCT_ShaderPrewarmOperation_FWDDECL
#include <Modloader/app/structs/ShaderPrewarmOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderPrewarmOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderPrewarmOperation_DEFINED) && !defined(IL2CPP_STRUCT_ShaderPrewarmOperation_FWDDECL)
#include <Modloader/app/structs/ShaderPrewarmOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderPrewarmOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
