#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestMessageBox__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestMessageBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestMessageBox__Fields_DEFINED)
#include <Modloader/app/structs/MessageBox__Fields.h>
#if defined(IL2CPP_STRUCT_MessageBox__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestMessageBox__Fields_DEFINED
struct TextBox;
struct QuestMessageBox__Fields {
    struct MessageBox__Fields _;
    struct TextBox* HeaderText;
    struct TextBox* FooterText;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestMessageBox__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestMessageBox__Fields_FWDDECL
#include <Modloader/app/structs/TextBox.h>
#endif
#undef IL2CPP_STRUCT_QuestMessageBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestMessageBox__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestMessageBox__Fields_FWDDECL)
#include <Modloader/app/structs/QuestMessageBox__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestMessageBox__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
