#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugHub__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugHub__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHub__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DebugHub__StaticFields_DEFINED
struct HashSet_1_Moon_ISuspendable_;
struct DebugHub;
struct String;
struct Material;
struct DebugHub__StaticFields {
    struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
    struct DebugHub* Instance;
    struct String* s_colorBufferShaderName;
    struct Material* s_baseMaterial;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugHub__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DebugHub__StaticFields_FWDDECL
#include <Modloader/app/structs/DebugHub.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugHub__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHub__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DebugHub__StaticFields_FWDDECL)
#include <Modloader/app/structs/DebugHub__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugHub__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
