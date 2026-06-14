#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRBrowserPanel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRBrowserPanel_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRBrowserPanel_DEFINED)
#include <Modloader/app/structs/VRBrowserPanel__Fields.h>
#if defined(IL2CPP_STRUCT_VRBrowserPanel__Fields_DEFINED)
#define IL2CPP_STRUCT_VRBrowserPanel_DEFINED
struct VRBrowserPanel__Class;
struct VRBrowserPanel {
    struct VRBrowserPanel__Class* klass;
    MonitorData* monitor;
    struct VRBrowserPanel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRBrowserPanel_FWDDECL)
#define IL2CPP_STRUCT_VRBrowserPanel_FWDDECL
#include <Modloader/app/structs/VRBrowserPanel__Class.h>
#endif
#undef IL2CPP_STRUCT_VRBrowserPanel_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRBrowserPanel_DEFINED) && !defined(IL2CPP_STRUCT_VRBrowserPanel_FWDDECL)
#include <Modloader/app/structs/VRBrowserPanel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRBrowserPanel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
