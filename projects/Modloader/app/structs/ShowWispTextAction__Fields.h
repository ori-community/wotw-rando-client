#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowWispTextAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowWispTextAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowWispTextAction__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowWispTextAction__Fields_DEFINED
struct MessageBox;
struct ShowWispTextAction__Fields {
    struct PerformingAction__Fields _;
    struct MessageBox* m_messageBox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowWispTextAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowWispTextAction__Fields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#endif
#undef IL2CPP_STRUCT_ShowWispTextAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowWispTextAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowWispTextAction__Fields_FWDDECL)
#include <Modloader/app/structs/ShowWispTextAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowWispTextAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
