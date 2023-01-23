#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellMessageIcon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellMessageIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellMessageIcon__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellMessageIcon__Fields_DEFINED
struct MeshRenderer;
struct MessageBox;
struct MessageProvider;
struct SpellMessageIcon__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer* IconRenderer;
    struct MessageBox* SpellName;
    struct MessageBox* SubText;
    struct MessageBox* Description;
    struct MessageProvider* PassiveType;
    struct MessageProvider* AbilityType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellMessageIcon__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellMessageIcon__Fields_FWDDECL
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_SpellMessageIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellMessageIcon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellMessageIcon__Fields_FWDDECL)
#include <Modloader/app/structs/SpellMessageIcon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellMessageIcon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
