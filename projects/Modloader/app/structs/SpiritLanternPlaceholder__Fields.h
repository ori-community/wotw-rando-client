#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_DEFINED
struct GameObject;
struct Rope;
struct SpiritLanternPlaceholder__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Prefab;
    struct Rope* RopeToAttachTo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rope.h>
#endif
#undef IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLanternPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLanternPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLanternPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
