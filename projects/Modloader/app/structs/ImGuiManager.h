#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImGuiManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImGuiManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImGuiManager_DEFINED)
#include <Modloader/app/structs/ImGuiManager__Fields.h>
#if defined(IL2CPP_STRUCT_ImGuiManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ImGuiManager_DEFINED
struct ImGuiManager__Class;
struct ImGuiManager {
    struct ImGuiManager__Class* klass;
    MonitorData* monitor;
    struct ImGuiManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ImGuiManager_FWDDECL)
#define IL2CPP_STRUCT_ImGuiManager_FWDDECL
#include <Modloader/app/structs/ImGuiManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ImGuiManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImGuiManager_DEFINED) && !defined(IL2CPP_STRUCT_ImGuiManager_FWDDECL)
#include <Modloader/app/structs/ImGuiManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImGuiManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
