#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trail_CurveFrame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trail_CurveFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_CurveFrame_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Trail_CurveFrame_DEFINED
struct Trail_CurveFrame {
    struct Vector3 Position;
    struct Vector3 Normal;
    struct Vector3 Bitangent;
    struct Vector3 Tangent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trail_CurveFrame_FWDDECL)
#define IL2CPP_STRUCT_Trail_CurveFrame_FWDDECL
#endif
#undef IL2CPP_STRUCT_Trail_CurveFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_CurveFrame_DEFINED) && !defined(IL2CPP_STRUCT_Trail_CurveFrame_FWDDECL)
#include <Modloader/app/structs/Trail_CurveFrame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trail_CurveFrame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
