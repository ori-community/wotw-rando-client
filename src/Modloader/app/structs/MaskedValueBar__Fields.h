#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskedValueBar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskedValueBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedValueBar__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberShaderProperty_Texture__Enum_DEFINED)
#define IL2CPP_STRUCT_MaskedValueBar__Fields_DEFINED
struct Renderer;
struct FloatValueProvider;
struct ChangeDetectorFloat;
struct MaskedValueBar__Fields {
    struct MonoBehaviour__Fields _;
    struct Renderer* m_renderer;
    struct FloatValueProvider* Value;
    float MinX;
    float MaxX;
    struct ChangeDetectorFloat* m_changeDetector;
    bool m_hasRun;
    UberShaderProperty_Texture__Enum Property;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskedValueBar__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaskedValueBar__Fields_FWDDECL
#include <Modloader/app/structs/ChangeDetectorFloat.h>
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_MaskedValueBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedValueBar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaskedValueBar__Fields_FWDDECL)
#include <Modloader/app/structs/MaskedValueBar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskedValueBar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
