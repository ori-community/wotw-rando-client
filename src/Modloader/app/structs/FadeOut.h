#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FadeOut_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FadeOut_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeOut_DEFINED)
#include <Modloader/app/structs/FadeOut__Fields.h>
#if defined(IL2CPP_STRUCT_FadeOut__Fields_DEFINED)
#define IL2CPP_STRUCT_FadeOut_DEFINED
struct FadeOut__Class;
struct FadeOut {
    struct FadeOut__Class* klass;
    MonitorData* monitor;
    struct FadeOut__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FadeOut_FWDDECL)
#define IL2CPP_STRUCT_FadeOut_FWDDECL
#include <Modloader/app/structs/FadeOut__Class.h>
#endif
#undef IL2CPP_STRUCT_FadeOut_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeOut_DEFINED) && !defined(IL2CPP_STRUCT_FadeOut_FWDDECL)
#include <Modloader/app/structs/FadeOut.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FadeOut.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
