#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavigableOnGUI_Field_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavigableOnGUI_Field_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_Field_DEFINED)
#define IL2CPP_STRUCT_NavigableOnGUI_Field_DEFINED
struct NavigableOnGUI;
struct NavigableOnGUI_Field {
    struct NavigableOnGUI* ui;
};
#endif
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_Field_FWDDECL)
#define IL2CPP_STRUCT_NavigableOnGUI_Field_FWDDECL
#include <Modloader/app/structs/NavigableOnGUI.h>
#endif
#undef IL2CPP_STRUCT_NavigableOnGUI_Field_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_Field_DEFINED) && !defined(IL2CPP_STRUCT_NavigableOnGUI_Field_FWDDECL)
#include <Modloader/app/structs/NavigableOnGUI_Field.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavigableOnGUI_Field.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
