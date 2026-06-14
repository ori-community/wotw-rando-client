#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUISeeds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUISeeds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUISeeds__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_MessageDescriptor_DEFINED)
#define IL2CPP_STRUCT_SpellUISeeds__Fields_DEFINED
struct GameObject;
struct ActionMethod;
struct SpellUISeeds__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* ValueGO;
    struct Color TextColor;
    struct ActionMethod* OnOreWasSpent;
    struct ActionMethod* OnNotEnoughOre;
    int32_t m_ore;
    struct MessageDescriptor m_message;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUISeeds__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUISeeds__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SpellUISeeds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUISeeds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUISeeds__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUISeeds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUISeeds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
