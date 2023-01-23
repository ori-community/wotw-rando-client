#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FpsGraph__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FpsGraph__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FpsGraph__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FpsGraph__StaticFields_DEFINED
struct FpsGraph;
struct Int32__Array;
struct FpsGraph__StaticFields {
    struct FpsGraph* Instance;
    float m_xGraphOffset;
    float m_yGraphOffset;
    int32_t m_lastCollectionCount;
    struct Int32__Array* numberBits;
};
#endif
#if !defined(IL2CPP_STRUCT_FpsGraph__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FpsGraph__StaticFields_FWDDECL
#include <Modloader/app/structs/FpsGraph.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_FpsGraph__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FpsGraph__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FpsGraph__StaticFields_FWDDECL)
#include <Modloader/app/structs/FpsGraph__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FpsGraph__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
