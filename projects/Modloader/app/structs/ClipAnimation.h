#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClipAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClipAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClipAnimation_DEFINED)
#include <Modloader/app/structs/ClipAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_ClipAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_ClipAnimation_DEFINED
struct ClipAnimation__Class;
struct ClipAnimation {
    struct ClipAnimation__Class* klass;
    MonitorData* monitor;
    struct ClipAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClipAnimation_FWDDECL)
#define IL2CPP_STRUCT_ClipAnimation_FWDDECL
#include <Modloader/app/structs/ClipAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_ClipAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClipAnimation_DEFINED) && !defined(IL2CPP_STRUCT_ClipAnimation_FWDDECL)
#include <Modloader/app/structs/ClipAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClipAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
