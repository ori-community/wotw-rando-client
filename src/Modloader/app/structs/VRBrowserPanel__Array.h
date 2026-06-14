#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRBrowserPanel__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRBrowserPanel__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRBrowserPanel__Array_DEFINED)
#define IL2CPP_STRUCT_VRBrowserPanel__Array_DEFINED
struct VRBrowserPanel__Array__Class;
struct VRBrowserPanel;
struct VRBrowserPanel__Array {
    struct VRBrowserPanel__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct VRBrowserPanel* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_VRBrowserPanel__Array_FWDDECL)
#define IL2CPP_STRUCT_VRBrowserPanel__Array_FWDDECL
#include <Modloader/app/structs/VRBrowserPanel.h>
#include <Modloader/app/structs/VRBrowserPanel__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_VRBrowserPanel__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRBrowserPanel__Array_DEFINED) && !defined(IL2CPP_STRUCT_VRBrowserPanel__Array_FWDDECL)
#include <Modloader/app/structs/VRBrowserPanel__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRBrowserPanel__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
