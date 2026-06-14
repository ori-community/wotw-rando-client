#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinearPath__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinearPath__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinearPath__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LinearPath__Fields_DEFINED
struct List_1_UnityEngine_Vector3_;
struct LinearPath__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Vector3_* Path;
    struct Color PathColor;
    bool ClosedPath;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinearPath__Fields_FWDDECL)
#define IL2CPP_STRUCT_LinearPath__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#endif
#undef IL2CPP_STRUCT_LinearPath__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinearPath__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LinearPath__Fields_FWDDECL)
#include <Modloader/app/structs/LinearPath__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinearPath__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
