#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGaussianBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGaussianBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGaussianBlur_DEFINED)
#define IL2CPP_STRUCT_UberGaussianBlur_DEFINED
struct UberGaussianBlur__Class;
struct UberGaussianBlur {
    struct UberGaussianBlur__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberGaussianBlur_FWDDECL)
#define IL2CPP_STRUCT_UberGaussianBlur_FWDDECL
#include <Modloader/app/structs/UberGaussianBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_UberGaussianBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGaussianBlur_DEFINED) && !defined(IL2CPP_STRUCT_UberGaussianBlur_FWDDECL)
#include <Modloader/app/structs/UberGaussianBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGaussianBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
