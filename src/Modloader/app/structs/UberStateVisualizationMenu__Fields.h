#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_DEFINED
struct List_1_List_1_IDebugMenuItem_;
struct String;
struct Func_1_String_;
struct IUberStateVisualizationView;
struct UberStateVisualizationMenu__Fields {
    struct MonoBehaviour__Fields _;
    bool _Active_k__BackingField;
    struct List_1_List_1_IDebugMenuItem_* _Items_k__BackingField;
    struct String* _Path_k__BackingField;
    struct String* _Text_k__BackingField;
    struct String* _HelpText_k__BackingField;
    struct Func_1_String_* _DynamicText_k__BackingField;
    struct IUberStateVisualizationView* view;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/IUberStateVisualizationView.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateVisualizationMenu__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateVisualizationMenu__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateVisualizationMenu__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
