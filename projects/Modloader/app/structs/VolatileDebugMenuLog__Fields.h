#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_DEFINED
struct String;
struct Func_1_String_;
struct List_1_List_1_IDebugMenuItem_;
struct GUISkin;
struct VolatileDebugMenuLog__Fields {
    struct MonoBehaviour__Fields _;
    struct String* _Path_k__BackingField;
    struct String* _Text_k__BackingField;
    struct String* _HelpText_k__BackingField;
    struct Func_1_String_* _DynamicText_k__BackingField;
    bool _Active_k__BackingField;
    struct List_1_List_1_IDebugMenuItem_* _Items_k__BackingField;
    struct GUISkin* Skin;
    float m_holdSpeed;
    float m_holdAccumulation;
    float m_holdDelayDuration;
    float m_holdRemainingTime;
    int32_t m_selectionIndex;
    int32_t m_maxIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolatileDebugMenuLog__Fields_FWDDECL)
#include <Modloader/app/structs/VolatileDebugMenuLog__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolatileDebugMenuLog__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
