#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GaussianBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GaussianBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_GaussianBlur_DEFINED)
#include <Modloader/app/structs/GaussianBlur__Fields.h>
#if defined(IL2CPP_STRUCT_GaussianBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_GaussianBlur_DEFINED
struct GaussianBlur__Class;
struct GaussianBlur {
    struct GaussianBlur__Class* klass;
    MonitorData* monitor;
    struct GaussianBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GaussianBlur_FWDDECL)
#define IL2CPP_STRUCT_GaussianBlur_FWDDECL
#include <Modloader/app/structs/GaussianBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_GaussianBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_GaussianBlur_DEFINED) && !defined(IL2CPP_STRUCT_GaussianBlur_FWDDECL)
#include <Modloader/app/structs/GaussianBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GaussianBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
