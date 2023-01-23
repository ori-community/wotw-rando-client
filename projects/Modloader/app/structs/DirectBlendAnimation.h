#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectBlendAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectBlendAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation_DEFINED)
#include <Modloader/app/structs/DirectBlendAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_DirectBlendAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectBlendAnimation_DEFINED
struct DirectBlendAnimation__Class;
struct DirectBlendAnimation {
    struct DirectBlendAnimation__Class* klass;
    MonitorData* monitor;
    struct DirectBlendAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation_FWDDECL)
#define IL2CPP_STRUCT_DirectBlendAnimation_FWDDECL
#include <Modloader/app/structs/DirectBlendAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectBlendAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation_DEFINED) && !defined(IL2CPP_STRUCT_DirectBlendAnimation_FWDDECL)
#include <Modloader/app/structs/DirectBlendAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectBlendAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
