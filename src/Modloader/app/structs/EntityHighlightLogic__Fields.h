#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHighlightLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHighlightLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHighlightLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityHighlightLogic__Fields_DEFINED
struct GameObject;
struct EntityHighlightLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* OnBashHighlightEffect;
    struct GameObject* OnSpiritFlameHighlightEffect;
    struct GameObject* OnSpiritSlashHighlightEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHighlightLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityHighlightLogic__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_EntityHighlightLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHighlightLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityHighlightLogic__Fields_FWDDECL)
#include <Modloader/app/structs/EntityHighlightLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHighlightLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
