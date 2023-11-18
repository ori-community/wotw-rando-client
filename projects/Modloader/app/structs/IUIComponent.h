#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUIComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUIComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUIComponent_DEFINED)
#define IL2CPP_STRUCT_IUIComponent_DEFINED
struct IUIComponent__Class;
struct IUIComponent {
    struct IUIComponent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUIComponent_FWDDECL)
#define IL2CPP_STRUCT_IUIComponent_FWDDECL
#include <Modloader/app/structs/IUIComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_IUIComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUIComponent_DEFINED) && !defined(IL2CPP_STRUCT_IUIComponent_FWDDECL)
#include <Modloader/app/structs/IUIComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUIComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
