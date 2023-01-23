#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_DEFINED)
#include <Modloader/app/structs/Otri.h>
#if defined(IL2CPP_STRUCT_Otri_DEFINED)
#define IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_DEFINED
struct Vertex;
struct __declspec(align(8)) SweepLine_SweepEvent__Fields {
    double xkey;
    double ykey;
    struct Vertex* vertexEvent;
    struct Otri otriEvent;
    int32_t heapposition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_FWDDECL
#include <Modloader/app/structs/Vertex.h>
#endif
#undef IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SweepLine_SweepEvent__Fields_FWDDECL)
#include <Modloader/app/structs/SweepLine_SweepEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SweepLine_SweepEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
