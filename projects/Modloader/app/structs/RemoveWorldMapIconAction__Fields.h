#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_DEFINED
struct VisibleOnWorldMap;
struct RemoveWorldMapIconAction__Fields {
    struct ActionMethod__Fields _;
    struct VisibleOnWorldMap* Target;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_FWDDECL
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#endif
#undef IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RemoveWorldMapIconAction__Fields_FWDDECL)
#include <Modloader/app/structs/RemoveWorldMapIconAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveWorldMapIconAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
