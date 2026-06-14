#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Blend2DVertexState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Blend2DVertexState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blend2DVertexState__Fields_DEFINED)
#include <Modloader/app/structs/VertexType__Enum.h>
#if defined(IL2CPP_STRUCT_VertexType__Enum_DEFINED)
#define IL2CPP_STRUCT_Blend2DVertexState__Fields_DEFINED
struct __declspec(align(8)) Blend2DVertexState__Fields {
    int32_t Hash;
    int32_t Id;
    int32_t Label;
    float X;
    float Y;
    int32_t InputIndex;
    VertexType__Enum Type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Blend2DVertexState__Fields_FWDDECL)
#define IL2CPP_STRUCT_Blend2DVertexState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Blend2DVertexState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blend2DVertexState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Blend2DVertexState__Fields_FWDDECL)
#include <Modloader/app/structs/Blend2DVertexState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Blend2DVertexState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
