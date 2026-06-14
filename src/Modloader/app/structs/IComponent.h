#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComponent_DEFINED)
#define IL2CPP_STRUCT_IComponent_DEFINED
struct IComponent__Class;
struct IComponent {
    struct IComponent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IComponent_FWDDECL)
#define IL2CPP_STRUCT_IComponent_FWDDECL
#include <Modloader/app/structs/IComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_IComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComponent_DEFINED) && !defined(IL2CPP_STRUCT_IComponent_FWDDECL)
#include <Modloader/app/structs/IComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
