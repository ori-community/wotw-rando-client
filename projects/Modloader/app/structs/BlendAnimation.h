#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation_DEFINED)
#include <Modloader/app/structs/BlendAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_BlendAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_BlendAnimation_DEFINED
struct BlendAnimation__Class;
struct BlendAnimation {
    struct BlendAnimation__Class* klass;
    MonitorData* monitor;
    struct BlendAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendAnimation_FWDDECL)
#define IL2CPP_STRUCT_BlendAnimation_FWDDECL
#include <Modloader/app/structs/BlendAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_BlendAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation_DEFINED) && !defined(IL2CPP_STRUCT_BlendAnimation_FWDDECL)
#include <Modloader/app/structs/BlendAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
