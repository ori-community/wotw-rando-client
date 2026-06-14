#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapScrollLimit__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapScrollLimit__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapScrollLimit__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_AreaMapScrollLimit__Fields_DEFINED
struct Condition_1;
struct AreaMapScrollLimit__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* Condition;
    struct Rect m_area;
    bool m_areaCalculated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapScrollLimit__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapScrollLimit__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_AreaMapScrollLimit__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapScrollLimit__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapScrollLimit__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapScrollLimit__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapScrollLimit__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
