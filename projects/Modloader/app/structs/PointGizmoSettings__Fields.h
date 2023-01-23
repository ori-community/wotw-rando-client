#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointGizmoSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointGizmoSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointGizmoSettings__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GizmoHandleType__Enum.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_GizmoHandleType__Enum_DEFINED)
#define IL2CPP_STRUCT_PointGizmoSettings__Fields_DEFINED
struct String;
struct __declspec(align(8)) PointGizmoSettings__Fields {
    struct String* m_label;
    struct Color m_color;
    float m_size;
    GizmoHandleType__Enum m_handleType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointGizmoSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointGizmoSettings__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PointGizmoSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointGizmoSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointGizmoSettings__Fields_FWDDECL)
#include <Modloader/app/structs/PointGizmoSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointGizmoSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
