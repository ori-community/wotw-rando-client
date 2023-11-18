#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIComponent_DEFINED)
#include <Modloader/app/structs/UIComponent__Fields.h>
#if defined(IL2CPP_STRUCT_UIComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_UIComponent_DEFINED
struct UIComponent__Class;
struct UIComponent {
    struct UIComponent__Class* klass;
    MonitorData* monitor;
    struct UIComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIComponent_FWDDECL)
#define IL2CPP_STRUCT_UIComponent_FWDDECL
#include <Modloader/app/structs/UIComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_UIComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIComponent_DEFINED) && !defined(IL2CPP_STRUCT_UIComponent_FWDDECL)
#include <Modloader/app/structs/UIComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
