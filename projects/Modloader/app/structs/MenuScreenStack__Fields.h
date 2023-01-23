#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuScreenStack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuScreenStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED
struct List_1_MenuScreen_;
struct MenuScreenStack__Fields {
    struct MenuScreen__Fields _;
    struct List_1_MenuScreen_* m_stack;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuScreenStack__Fields_FWDDECL)
#define IL2CPP_STRUCT_MenuScreenStack__Fields_FWDDECL
#include <Modloader/app/structs/List_1_MenuScreen_.h>
#endif
#undef IL2CPP_STRUCT_MenuScreenStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MenuScreenStack__Fields_FWDDECL)
#include <Modloader/app/structs/MenuScreenStack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuScreenStack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
