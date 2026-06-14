#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_DEFINED
struct SlicedRenderSettingsEditor;
struct Int32__Array;
struct HashSet_1_Moon_ISuspendable_;
struct SlicedRenderSettingsEditor__StaticFields {
    bool ShowHelp;
    struct SlicedRenderSettingsEditor* Instance;
    struct Color PANEL_BACKGROUND_COLOR;
    struct Color PANEL_BACKGROUND_COLOR_NOEDIT;
    struct Color BAR_BACKGROUND_COLOR;
    struct Color DOF_BAR_COLOR;
    struct Color DOF_BAR_COLOR_CLIPPED;
    struct Color SCALE_BAR_COLOR;
    struct Color SCALE_BAR_COLOR_CLIPPED;
    struct Color SELECTED_EDIT_COLOR;
    struct Color s_white;
    struct Color s_red;
    struct Color s_yellow;
    struct Color s_green;
    struct Color s_clear;
    struct Color s_black;
    struct Int32__Array* numberBits;
    struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SlicedRenderSettingsEditor.h>
#endif
#undef IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SlicedRenderSettingsEditor__StaticFields_FWDDECL)
#include <Modloader/app/structs/SlicedRenderSettingsEditor__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlicedRenderSettingsEditor__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
