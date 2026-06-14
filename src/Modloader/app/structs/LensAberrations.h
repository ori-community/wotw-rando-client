#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LensAberrations_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LensAberrations_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_DEFINED)
#include <Modloader/app/structs/LensAberrations__Fields.h>
#if defined(IL2CPP_STRUCT_LensAberrations__Fields_DEFINED)
#define IL2CPP_STRUCT_LensAberrations_DEFINED
struct LensAberrations__Class;
struct LensAberrations {
    struct LensAberrations__Class* klass;
    MonitorData* monitor;
    struct LensAberrations__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LensAberrations_FWDDECL)
#define IL2CPP_STRUCT_LensAberrations_FWDDECL
#include <Modloader/app/structs/LensAberrations__Class.h>
#endif
#undef IL2CPP_STRUCT_LensAberrations_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_DEFINED) && !defined(IL2CPP_STRUCT_LensAberrations_FWDDECL)
#include <Modloader/app/structs/LensAberrations.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LensAberrations.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
