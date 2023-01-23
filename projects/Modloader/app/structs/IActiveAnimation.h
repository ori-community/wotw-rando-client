#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IActiveAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IActiveAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_IActiveAnimation_DEFINED)
#define IL2CPP_STRUCT_IActiveAnimation_DEFINED
struct IActiveAnimation__Class;
struct IActiveAnimation {
    struct IActiveAnimation__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IActiveAnimation_FWDDECL)
#define IL2CPP_STRUCT_IActiveAnimation_FWDDECL
#include <Modloader/app/structs/IActiveAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_IActiveAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_IActiveAnimation_DEFINED) && !defined(IL2CPP_STRUCT_IActiveAnimation_FWDDECL)
#include <Modloader/app/structs/IActiveAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IActiveAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
