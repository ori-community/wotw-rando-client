#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InspectorColorAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InspectorColorAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InspectorColorAttribute__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_InspectorColorAttribute__Fields_DEFINED
struct __declspec(align(8)) InspectorColorAttribute__Fields {
    float r;
    float g;
    float b;
    float a;
    struct Color m_color;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InspectorColorAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_InspectorColorAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_InspectorColorAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InspectorColorAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InspectorColorAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/InspectorColorAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InspectorColorAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
