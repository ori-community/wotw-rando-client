#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimation_DEFINED)
#define IL2CPP_STRUCT_IAnimation_DEFINED
struct IAnimation__Class;
struct IAnimation {
    struct IAnimation__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAnimation_FWDDECL)
#define IL2CPP_STRUCT_IAnimation_FWDDECL
#include <Modloader/app/structs/IAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_IAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimation_DEFINED) && !defined(IL2CPP_STRUCT_IAnimation_FWDDECL)
#include <Modloader/app/structs/IAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
