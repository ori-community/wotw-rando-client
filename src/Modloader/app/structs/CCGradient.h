#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCGradient_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCGradient_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCGradient_DEFINED)
#include <Modloader/app/structs/CCGradient__Fields.h>
#if defined(IL2CPP_STRUCT_CCGradient__Fields_DEFINED)
#define IL2CPP_STRUCT_CCGradient_DEFINED
struct CCGradient__Class;
struct CCGradient {
    struct CCGradient__Class* klass;
    MonitorData* monitor;
    struct CCGradient__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCGradient_FWDDECL)
#define IL2CPP_STRUCT_CCGradient_FWDDECL
#include <Modloader/app/structs/CCGradient__Class.h>
#endif
#undef IL2CPP_STRUCT_CCGradient_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCGradient_DEFINED) && !defined(IL2CPP_STRUCT_CCGradient_FWDDECL)
#include <Modloader/app/structs/CCGradient.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCGradient.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
