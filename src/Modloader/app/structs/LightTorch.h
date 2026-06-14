#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightTorch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightTorch_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightTorch_DEFINED)
#include <Modloader/app/structs/LightTorch__Fields.h>
#if defined(IL2CPP_STRUCT_LightTorch__Fields_DEFINED)
#define IL2CPP_STRUCT_LightTorch_DEFINED
struct LightTorch__Class;
struct LightTorch {
    struct LightTorch__Class* klass;
    MonitorData* monitor;
    struct LightTorch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightTorch_FWDDECL)
#define IL2CPP_STRUCT_LightTorch_FWDDECL
#include <Modloader/app/structs/LightTorch__Class.h>
#endif
#undef IL2CPP_STRUCT_LightTorch_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightTorch_DEFINED) && !defined(IL2CPP_STRUCT_LightTorch_FWDDECL)
#include <Modloader/app/structs/LightTorch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightTorch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
