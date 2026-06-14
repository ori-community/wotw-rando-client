#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorScene__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorScene__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorScene__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EditorScene__StaticFields_DEFINED
struct String__Array;
struct EditorScene__StaticFields {
    struct String__Array* DressingModeGroups;
    struct String__Array* SolidsModeGroups;
};
#endif
#if !defined(IL2CPP_STRUCT_EditorScene__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EditorScene__StaticFields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_EditorScene__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorScene__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EditorScene__StaticFields_FWDDECL)
#include <Modloader/app/structs/EditorScene__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorScene__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
