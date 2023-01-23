#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MistTorch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MistTorch_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistTorch_DEFINED)
#include <Modloader/app/structs/MistTorch__Fields.h>
#if defined(IL2CPP_STRUCT_MistTorch__Fields_DEFINED)
#define IL2CPP_STRUCT_MistTorch_DEFINED
struct MistTorch__Class;
struct MistTorch {
    struct MistTorch__Class* klass;
    MonitorData* monitor;
    struct MistTorch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MistTorch_FWDDECL)
#define IL2CPP_STRUCT_MistTorch_FWDDECL
#include <Modloader/app/structs/MistTorch__Class.h>
#endif
#undef IL2CPP_STRUCT_MistTorch_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistTorch_DEFINED) && !defined(IL2CPP_STRUCT_MistTorch_FWDDECL)
#include <Modloader/app/structs/MistTorch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MistTorch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
