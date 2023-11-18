#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCompiler__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCompiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCompiler__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LightCompiler__StaticFields_DEFINED
struct LocalDefinition__Array;
struct LightCompiler__StaticFields {
    struct LocalDefinition__Array* s_emptyLocals;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCompiler__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LightCompiler__StaticFields_FWDDECL
#include <Modloader/app/structs/LocalDefinition__Array.h>
#endif
#undef IL2CPP_STRUCT_LightCompiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCompiler__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LightCompiler__StaticFields_FWDDECL)
#include <Modloader/app/structs/LightCompiler__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCompiler__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
