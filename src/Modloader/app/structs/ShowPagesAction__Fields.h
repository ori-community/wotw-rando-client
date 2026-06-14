#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowPagesAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowPagesAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowPagesAction__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#include <Modloader/app/structs/ShowPagesAction_MessageType__Enum.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED) && defined(IL2CPP_STRUCT_ShowPagesAction_MessageType__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowPagesAction__Fields_DEFINED
struct ActionMethod;
struct Texture2D__Array;
struct Condition_1;
struct MessageProvider;
struct GameObject;
struct MessageBox;
struct ShowPagesAction__Fields {
    struct PerformingAction__Fields _;
    struct ActionMethod* ActionOnFinishedReading;
    bool FreezeTime;
    struct Texture2D__Array* Pages;
    struct Condition_1* Condition;
    struct MessageProvider* Message;
    struct GameObject* Avatar;
    float MinWaitTime;
    ShowPagesAction_MessageType__Enum Type;

    struct MessageBox* m_message;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowPagesAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowPagesAction__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D__Array.h>
#endif
#undef IL2CPP_STRUCT_ShowPagesAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowPagesAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowPagesAction__Fields_FWDDECL)
#include <Modloader/app/structs/ShowPagesAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowPagesAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
