#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BilateralGaussianBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BilateralGaussianBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_BilateralGaussianBlur_DEFINED)
#include <Modloader/app/structs/BilateralGaussianBlur__Fields.h>
#if defined(IL2CPP_STRUCT_BilateralGaussianBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_BilateralGaussianBlur_DEFINED
struct BilateralGaussianBlur__Class;
struct BilateralGaussianBlur {
    struct BilateralGaussianBlur__Class* klass;
    MonitorData* monitor;
    struct BilateralGaussianBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BilateralGaussianBlur_FWDDECL)
#define IL2CPP_STRUCT_BilateralGaussianBlur_FWDDECL
#include <Modloader/app/structs/BilateralGaussianBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_BilateralGaussianBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_BilateralGaussianBlur_DEFINED) && !defined(IL2CPP_STRUCT_BilateralGaussianBlur_FWDDECL)
#include <Modloader/app/structs/BilateralGaussianBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BilateralGaussianBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
