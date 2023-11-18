#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisallowMultipleComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisallowMultipleComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisallowMultipleComponent_DEFINED)
#define IL2CPP_STRUCT_DisallowMultipleComponent_DEFINED
struct DisallowMultipleComponent__Class;
struct DisallowMultipleComponent {
    struct DisallowMultipleComponent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DisallowMultipleComponent_FWDDECL)
#define IL2CPP_STRUCT_DisallowMultipleComponent_FWDDECL
#include <Modloader/app/structs/DisallowMultipleComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_DisallowMultipleComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisallowMultipleComponent_DEFINED) && !defined(IL2CPP_STRUCT_DisallowMultipleComponent_FWDDECL)
#include <Modloader/app/structs/DisallowMultipleComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisallowMultipleComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
