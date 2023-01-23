#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnTextBoxes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnTextBoxes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnTextBoxes__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpawnTextBoxes__Fields_DEFINED
struct GameObject;
struct String__Array;
struct TextBoxMessage;
struct SpawnTextBoxes__Fields {
    struct PerformingAction__Fields _;
    struct GameObject* MessagePrefab;
    struct GameObject* m_messageInstance;
    struct Vector3 MessageBoxOffset;
    struct Vector3 Position;
    struct String__Array* Strings;
    struct TextBoxMessage* m_textBoxMessage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnTextBoxes__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpawnTextBoxes__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TextBoxMessage.h>
#endif
#undef IL2CPP_STRUCT_SpawnTextBoxes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnTextBoxes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpawnTextBoxes__Fields_FWDDECL)
#include <Modloader/app/structs/SpawnTextBoxes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnTextBoxes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
