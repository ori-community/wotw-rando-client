#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIExperience__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIExperience__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIExperience__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_MessageDescriptor_DEFINED)
#define IL2CPP_STRUCT_SpellUIExperience__Fields_DEFINED
struct GameObject;
struct ActionMethod;
struct MessageBox;
struct TextBox;
struct SpellUIExperience__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* ValueGO;
    struct Color TextColor;
    struct ActionMethod* OnExperienceWasSpent;
    struct ActionMethod* OnNotEnoughExperience;
    int32_t m_experience;
    struct MessageDescriptor m_message;
    struct MessageBox* m_messageBox;
    struct TextBox* m_textBox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIExperience__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUIExperience__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/TextBox.h>
#endif
#undef IL2CPP_STRUCT_SpellUIExperience__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIExperience__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIExperience__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUIExperience__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIExperience__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
