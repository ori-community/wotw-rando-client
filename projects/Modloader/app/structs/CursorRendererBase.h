#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CursorRendererBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CursorRendererBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererBase_DEFINED)
#include <Modloader/app/structs/CursorRendererBase__Fields.h>
#if defined(IL2CPP_STRUCT_CursorRendererBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CursorRendererBase_DEFINED
struct CursorRendererBase__Class;
struct CursorRendererBase {
    struct CursorRendererBase__Class* klass;
    MonitorData* monitor;
    struct CursorRendererBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CursorRendererBase_FWDDECL)
#define IL2CPP_STRUCT_CursorRendererBase_FWDDECL
#include <Modloader/app/structs/CursorRendererBase__Class.h>
#endif
#undef IL2CPP_STRUCT_CursorRendererBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererBase_DEFINED) && !defined(IL2CPP_STRUCT_CursorRendererBase_FWDDECL)
#include <Modloader/app/structs/CursorRendererBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CursorRendererBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
