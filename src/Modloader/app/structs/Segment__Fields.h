#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Segment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Segment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Segment__Fields_DEFINED)
#define IL2CPP_STRUCT_Segment__Fields_DEFINED
struct Vertex;
struct __declspec(align(8)) Segment__Fields {
    struct Vertex* v0;
    struct Vertex* v1;
    int32_t label;
};
#endif
#if !defined(IL2CPP_STRUCT_Segment__Fields_FWDDECL)
#define IL2CPP_STRUCT_Segment__Fields_FWDDECL
#include <Modloader/app/structs/Vertex.h>
#endif
#undef IL2CPP_STRUCT_Segment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Segment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Segment__Fields_FWDDECL)
#include <Modloader/app/structs/Segment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Segment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
