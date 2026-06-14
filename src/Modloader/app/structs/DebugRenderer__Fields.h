#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugRenderer__Fields_DEFINED
struct List_1_Moon_VisualDebug_IDebugRendererSubscriber_;
struct IPool_1_LineEntity_;
struct HashSet_1_Moon_VisualDebug_IRenderEntity_;
struct __declspec(align(8)) DebugRenderer__Fields {
    struct List_1_Moon_VisualDebug_IDebugRendererSubscriber_* m_subscribers;
    struct IPool_1_LineEntity_* m_lineEntityPool;
    struct HashSet_1_Moon_VisualDebug_IRenderEntity_* m_renderEntities;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugRenderer__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_VisualDebug_IRenderEntity_.h>
#include <Modloader/app/structs/IPool_1_LineEntity_.h>
#include <Modloader/app/structs/List_1_Moon_VisualDebug_IDebugRendererSubscriber_.h>
#endif
#undef IL2CPP_STRUCT_DebugRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/DebugRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
