#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FadingSound_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FadingSound_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadingSound_DEFINED)
#include <Modloader/app/structs/FadingSound__Fields.h>
#if defined(IL2CPP_STRUCT_FadingSound__Fields_DEFINED)
#define IL2CPP_STRUCT_FadingSound_DEFINED
struct FadingSound__Class;
struct FadingSound {
    struct FadingSound__Class* klass;
    MonitorData* monitor;
    struct FadingSound__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FadingSound_FWDDECL)
#define IL2CPP_STRUCT_FadingSound_FWDDECL
#include <Modloader/app/structs/FadingSound__Class.h>
#endif
#undef IL2CPP_STRUCT_FadingSound_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadingSound_DEFINED) && !defined(IL2CPP_STRUCT_FadingSound_FWDDECL)
#include <Modloader/app/structs/FadingSound.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FadingSound.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
