#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseSpline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseSpline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseSpline__Fields_DEFINED)
#include <Modloader/app/structs/BaseSpline_SplineReparamType__Enum.h>
#include <Modloader/app/structs/BaseSpline_SplineWrapMode__Enum.h>
#if defined(IL2CPP_STRUCT_BaseSpline_SplineWrapMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_BaseSpline_SplineReparamType__Enum_DEFINED)
#define IL2CPP_STRUCT_BaseSpline__Fields_DEFINED
struct __declspec(align(8)) BaseSpline__Fields {
    BaseSpline_SplineWrapMode__Enum m_wrapmode;

    float m_length;
    int32_t m_stepcount;
    BaseSpline_SplineReparamType__Enum m_reparam;

    int32_t m_buildnum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseSpline__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseSpline__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BaseSpline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseSpline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseSpline__Fields_FWDDECL)
#include <Modloader/app/structs/BaseSpline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseSpline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
