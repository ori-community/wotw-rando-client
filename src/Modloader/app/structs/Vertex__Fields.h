#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vertex__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vertex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vertex__Fields_DEFINED)
#include <Modloader/app/structs/Otri.h>
#include <Modloader/app/structs/Point__Fields.h>
#include <Modloader/app/structs/VertexType__Enum.h>
#if defined(IL2CPP_STRUCT_Point__Fields_DEFINED) && defined(IL2CPP_STRUCT_VertexType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Otri_DEFINED)
#define IL2CPP_STRUCT_Vertex__Fields_DEFINED
struct Vertex__Fields {
    struct Point__Fields _;
    int32_t hash;
    VertexType__Enum type;

    struct Otri tri;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vertex__Fields_FWDDECL)
#define IL2CPP_STRUCT_Vertex__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vertex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vertex__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Vertex__Fields_FWDDECL)
#include <Modloader/app/structs/Vertex__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vertex__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
