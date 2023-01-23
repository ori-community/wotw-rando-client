#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBeginDragHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBeginDragHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBeginDragHandler_DEFINED)
#define IL2CPP_STRUCT_IBeginDragHandler_DEFINED
struct IBeginDragHandler__Class;
struct IBeginDragHandler {
    struct IBeginDragHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBeginDragHandler_FWDDECL)
#define IL2CPP_STRUCT_IBeginDragHandler_FWDDECL
#include <Modloader/app/structs/IBeginDragHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IBeginDragHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBeginDragHandler_DEFINED) && !defined(IL2CPP_STRUCT_IBeginDragHandler_FWDDECL)
#include <Modloader/app/structs/IBeginDragHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBeginDragHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
