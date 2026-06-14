#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_DEFINED
struct UberShaderPrewarmer;
struct AsyncOperation_1;
struct UberShaderPrewarmer__StaticFields {
    struct UberShaderPrewarmer* Instance;
    float MaxMemoryUsed;
    float MaxShaderPercentageToPreload;
    bool RenderTrianglesDuringShaderPrewarming;
    struct AsyncOperation_1* s_syncOperation;
    bool IsComplete;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_FWDDECL
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/UberShaderPrewarmer.h>
#endif
#undef IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderPrewarmer__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberShaderPrewarmer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderPrewarmer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
