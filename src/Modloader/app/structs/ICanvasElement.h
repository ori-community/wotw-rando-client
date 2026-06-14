#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICanvasElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICanvasElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICanvasElement_DEFINED)
#define IL2CPP_STRUCT_ICanvasElement_DEFINED
struct ICanvasElement__Class;
struct ICanvasElement {
    struct ICanvasElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICanvasElement_FWDDECL)
#define IL2CPP_STRUCT_ICanvasElement_FWDDECL
#include <Modloader/app/structs/ICanvasElement__Class.h>
#endif
#undef IL2CPP_STRUCT_ICanvasElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICanvasElement_DEFINED) && !defined(IL2CPP_STRUCT_ICanvasElement_FWDDECL)
#include <Modloader/app/structs/ICanvasElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICanvasElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
