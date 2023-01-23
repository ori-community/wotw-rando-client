#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_DEFINED)
#include <Modloader/app/structs/BTPrefs_ConnectionStyle__Enum.h>
#if defined(IL2CPP_STRUCT_BTPrefs_ConnectionStyle__Enum_DEFINED)
#define IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_DEFINED
struct __declspec(align(8)) BTPrefs_SerializedData__Fields {
    bool doSnap;
    bool showIcons;
    BTPrefs_ConnectionStyle__Enum connectionStyle;

    bool showComments;
    bool showNodeDebug;
    bool breakpointPauseEditor;
    bool showWarnings;
    bool showCustomInspector;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_FWDDECL)
#define IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_FWDDECL)
#include <Modloader/app/structs/BTPrefs_SerializedData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BTPrefs_SerializedData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
