#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteOutTextBox__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteOutTextBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteOutTextBox__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteOutTextBox__Fields_DEFINED
struct MessageBox;
struct WriteOutTextBox__Fields {
    struct BaseAnimator__Fields _;
    struct MessageBox* MessageBox;
    float LettersPerSecond;
    float m_lastLetterIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteOutTextBox__Fields_FWDDECL)
#define IL2CPP_STRUCT_WriteOutTextBox__Fields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#endif
#undef IL2CPP_STRUCT_WriteOutTextBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteOutTextBox__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WriteOutTextBox__Fields_FWDDECL)
#include <Modloader/app/structs/WriteOutTextBox__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteOutTextBox__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
