#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrainyBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrainyBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrainyBlur_DEFINED)
#include <Modloader/app/structs/GrainyBlur__Fields.h>
#if defined(IL2CPP_STRUCT_GrainyBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_GrainyBlur_DEFINED
struct GrainyBlur__Class;
struct GrainyBlur {
    struct GrainyBlur__Class* klass;
    MonitorData* monitor;
    struct GrainyBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrainyBlur_FWDDECL)
#define IL2CPP_STRUCT_GrainyBlur_FWDDECL
#include <Modloader/app/structs/GrainyBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_GrainyBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrainyBlur_DEFINED) && !defined(IL2CPP_STRUCT_GrainyBlur_FWDDECL)
#include <Modloader/app/structs/GrainyBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrainyBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
