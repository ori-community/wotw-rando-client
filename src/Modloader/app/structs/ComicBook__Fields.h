#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComicBook__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComicBook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComicBook__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ComicBook__Fields_DEFINED
struct ComicBook__Fields {
    struct BaseEffect__Fields _;
    float StripAngle;
    float StripDensity;
    float StripThickness;
    struct Vector2 StripLimits;
    struct Color StripInnerColor;
    struct Color StripOuterColor;
    struct Color FillColor;
    struct Color BackgroundColor;
    bool EdgeDetection;
    float EdgeThreshold;
    struct Color EdgeColor;
    float Amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComicBook__Fields_FWDDECL)
#define IL2CPP_STRUCT_ComicBook__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ComicBook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComicBook__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ComicBook__Fields_FWDDECL)
#include <Modloader/app/structs/ComicBook__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComicBook__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
