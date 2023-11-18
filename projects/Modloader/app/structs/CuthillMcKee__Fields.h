#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CuthillMcKee__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CuthillMcKee__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CuthillMcKee__Fields_DEFINED)
#define IL2CPP_STRUCT_CuthillMcKee__Fields_DEFINED
struct AdjacencyMatrix;
struct __declspec(align(8)) CuthillMcKee__Fields {
    struct AdjacencyMatrix* matrix;
};
#endif
#if !defined(IL2CPP_STRUCT_CuthillMcKee__Fields_FWDDECL)
#define IL2CPP_STRUCT_CuthillMcKee__Fields_FWDDECL
#include <Modloader/app/structs/AdjacencyMatrix.h>
#endif
#undef IL2CPP_STRUCT_CuthillMcKee__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CuthillMcKee__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CuthillMcKee__Fields_FWDDECL)
#include <Modloader/app/structs/CuthillMcKee__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CuthillMcKee__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
