#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonIconRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonIconRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIconRenderer__Fields_DEFINED)
#include <Modloader/app/structs/TextRenderer__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_TextRenderer__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MoonIconRenderer__Fields_DEFINED
struct TextBoxIconsFontGenerator;
struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_;
struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_;
struct List_1_System_Single_;
struct MoonIconRenderer__Fields {
    struct TextRenderer__Fields _;
    struct TextBoxIconsFontGenerator* Icons;
    struct Vector2 IconOffset;
    struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_* m_data;
    struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* IconObjects;
    struct List_1_System_Single_* Positions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonIconRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonIconRenderer__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator.h>
#endif
#undef IL2CPP_STRUCT_MoonIconRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIconRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonIconRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/MoonIconRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonIconRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
