#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_DEFINED
struct MoonReference_1_UnityEngine_SpriteRenderer_;
struct MoonInt;
struct MoonReference_1_ITestInterface_;
struct MoonTypeCrossSceneTest__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_UnityEngine_SpriteRenderer_* TestSprite;
    struct MoonInt* TestInt;
    struct MoonReference_1_ITestInterface_* TestInterfaceImplimentor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_FWDDECL
#include <Modloader/app/structs/MoonInt.h>
#include <Modloader/app/structs/MoonReference_1_ITestInterface_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_SpriteRenderer_.h>
#endif
#undef IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTypeCrossSceneTest__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTypeCrossSceneTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTypeCrossSceneTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
