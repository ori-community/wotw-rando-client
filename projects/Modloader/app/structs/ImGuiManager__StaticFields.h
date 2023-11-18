#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImGuiManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImGuiManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImGuiManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ImGuiManager__StaticFields_DEFINED
struct HashSet_1_System_String_;
struct ImGuiManager__StaticFields {
    struct HashSet_1_System_String_* s_registeredStackTraces;
    bool canDisable;
    int32_t clientCount;
};
#endif
#if !defined(IL2CPP_STRUCT_ImGuiManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ImGuiManager__StaticFields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_ImGuiManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImGuiManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ImGuiManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/ImGuiManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImGuiManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
