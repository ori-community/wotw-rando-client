#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_DEFINED
struct __declspec(align(8)) CageStructureTool_Vertex__Fields {
    struct Vector3 Position;
    struct Vector3 _ScreenPosition_k__BackingField;
    struct Vector4 Metadata;
    int32_t ID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_FWDDECL)
#define IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CageStructureTool_Vertex__Fields_FWDDECL)
#include <Modloader/app/structs/CageStructureTool_Vertex__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageStructureTool_Vertex__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
