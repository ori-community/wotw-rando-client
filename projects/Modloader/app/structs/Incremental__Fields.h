#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Incremental__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Incremental__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Incremental__Fields_DEFINED)
#define IL2CPP_STRUCT_Incremental__Fields_DEFINED
struct Mesh_1;
struct __declspec(align(8)) Incremental__Fields {
    struct Mesh_1* mesh;
};
#endif
#if !defined(IL2CPP_STRUCT_Incremental__Fields_FWDDECL)
#define IL2CPP_STRUCT_Incremental__Fields_FWDDECL
#include <Modloader/app/structs/Mesh_1.h>
#endif
#undef IL2CPP_STRUCT_Incremental__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Incremental__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Incremental__Fields_FWDDECL)
#include <Modloader/app/structs/Incremental__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Incremental__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
