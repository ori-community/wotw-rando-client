#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatmullSpline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatmullSpline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatmullSpline__Fields_DEFINED)
#define IL2CPP_STRUCT_CatmullSpline__Fields_DEFINED
struct List_1_UnityEngine_Vector3_;
struct __declspec(align(8)) CatmullSpline__Fields {
    int32_t Subdivisions;
    struct List_1_UnityEngine_Vector3_* m_catmullPoints;
};
#endif
#if !defined(IL2CPP_STRUCT_CatmullSpline__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatmullSpline__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#endif
#undef IL2CPP_STRUCT_CatmullSpline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatmullSpline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatmullSpline__Fields_FWDDECL)
#include <Modloader/app/structs/CatmullSpline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatmullSpline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
