#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultControls_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultControls_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultControls_DEFINED)
#define IL2CPP_STRUCT_DefaultControls_DEFINED
struct DefaultControls__Class;
struct DefaultControls {
    struct DefaultControls__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultControls_FWDDECL)
#define IL2CPP_STRUCT_DefaultControls_FWDDECL
#include <Modloader/app/structs/DefaultControls__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultControls_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultControls_DEFINED) && !defined(IL2CPP_STRUCT_DefaultControls_FWDDECL)
#include <Modloader/app/structs/DefaultControls.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultControls.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
