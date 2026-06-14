#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRMainControlPanel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRMainControlPanel_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRMainControlPanel_DEFINED)
#include <Modloader/app/structs/VRMainControlPanel__Fields.h>
#if defined(IL2CPP_STRUCT_VRMainControlPanel__Fields_DEFINED)
#define IL2CPP_STRUCT_VRMainControlPanel_DEFINED
struct VRMainControlPanel__Class;
struct VRMainControlPanel {
    struct VRMainControlPanel__Class* klass;
    MonitorData* monitor;
    struct VRMainControlPanel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRMainControlPanel_FWDDECL)
#define IL2CPP_STRUCT_VRMainControlPanel_FWDDECL
#include <Modloader/app/structs/VRMainControlPanel__Class.h>
#endif
#undef IL2CPP_STRUCT_VRMainControlPanel_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRMainControlPanel_DEFINED) && !defined(IL2CPP_STRUCT_VRMainControlPanel_FWDDECL)
#include <Modloader/app/structs/VRMainControlPanel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRMainControlPanel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
