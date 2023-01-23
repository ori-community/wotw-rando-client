#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Text__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Text__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Text__Fields_DEFINED)
#include <Modloader/app/structs/MaskableGraphic__Fields.h>
#if defined(IL2CPP_STRUCT_MaskableGraphic__Fields_DEFINED)
#define IL2CPP_STRUCT_Text__Fields_DEFINED
struct FontData;
struct String;
struct TextGenerator;
struct UIVertex__Array;
struct Text__Fields {
    struct MaskableGraphic__Fields _;
    struct FontData* m_FontData;
    struct String* m_Text;
    struct TextGenerator* m_TextCache;
    struct TextGenerator* m_TextCacheForLayout;
    bool m_DisableFontTextureRebuiltCallback;
    struct UIVertex__Array* m_TempVerts;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Text__Fields_FWDDECL)
#define IL2CPP_STRUCT_Text__Fields_FWDDECL
#include <Modloader/app/structs/FontData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextGenerator.h>
#include <Modloader/app/structs/UIVertex__Array.h>
#endif
#undef IL2CPP_STRUCT_Text__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Text__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Text__Fields_FWDDECL)
#include <Modloader/app/structs/Text__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Text__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
