#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BadTriangle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BadTriangle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriangle__Fields_DEFINED)
#include <Modloader/app/structs/Otri.h>
#if defined(IL2CPP_STRUCT_Otri_DEFINED)
#define IL2CPP_STRUCT_BadTriangle__Fields_DEFINED
struct Vertex;
struct BadTriangle;
struct __declspec(align(8)) BadTriangle__Fields {
    struct Otri poortri;
    double key;
    struct Vertex* org;
    struct Vertex* dest;
    struct Vertex* apex;
    struct BadTriangle* next;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BadTriangle__Fields_FWDDECL)
#define IL2CPP_STRUCT_BadTriangle__Fields_FWDDECL
#include <Modloader/app/structs/BadTriangle.h>
#include <Modloader/app/structs/Vertex.h>
#endif
#undef IL2CPP_STRUCT_BadTriangle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriangle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BadTriangle__Fields_FWDDECL)
#include <Modloader/app/structs/BadTriangle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BadTriangle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
