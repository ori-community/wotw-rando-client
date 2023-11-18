#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_DEFINED)
#include <Modloader/app/structs/Vertex__Fields.h>
#if defined(IL2CPP_STRUCT_Vertex__Fields_DEFINED)
#define IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_DEFINED
struct SweepLine_SweepEvent;
struct SweepLine_SweepEventVertex__Fields {
    struct Vertex__Fields _;
    struct SweepLine_SweepEvent* evt;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_FWDDECL)
#define IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_FWDDECL
#include <Modloader/app/structs/SweepLine_SweepEvent.h>
#endif
#undef IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SweepLine_SweepEventVertex__Fields_FWDDECL)
#include <Modloader/app/structs/SweepLine_SweepEventVertex__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SweepLine_SweepEventVertex__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
