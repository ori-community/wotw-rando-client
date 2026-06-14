#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_DEFINED
struct Vector3__Array;
struct __declspec(align(8)) GhostLineRendererPlugin_LineRendererData__Fields {
    int32_t ID;
    int32_t Frame;
    int32_t Length;
    struct Vector3__Array* Positions;
    bool _Executed_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_FWDDECL
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostLineRendererPlugin_LineRendererData__Fields_FWDDECL)
#include <Modloader/app/structs/GhostLineRendererPlugin_LineRendererData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostLineRendererPlugin_LineRendererData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
