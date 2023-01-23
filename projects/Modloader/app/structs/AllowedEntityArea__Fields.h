#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AllowedEntityArea__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AllowedEntityArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllowedEntityArea__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_AllowedEntityArea__Fields_DEFINED
struct List_1_UnityEngine_Rect_;
struct __declspec(align(8)) AllowedEntityArea__Fields {
    struct List_1_UnityEngine_Rect_* m_bounds;
    struct Rect m_simplifiedOverlapingRect;
    bool _Forgotten_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AllowedEntityArea__Fields_FWDDECL)
#define IL2CPP_STRUCT_AllowedEntityArea__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#endif
#undef IL2CPP_STRUCT_AllowedEntityArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllowedEntityArea__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AllowedEntityArea__Fields_FWDDECL)
#include <Modloader/app/structs/AllowedEntityArea__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AllowedEntityArea__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
