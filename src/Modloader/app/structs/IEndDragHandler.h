#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEndDragHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEndDragHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEndDragHandler_DEFINED)
#define IL2CPP_STRUCT_IEndDragHandler_DEFINED
struct IEndDragHandler__Class;
struct IEndDragHandler {
    struct IEndDragHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEndDragHandler_FWDDECL)
#define IL2CPP_STRUCT_IEndDragHandler_FWDDECL
#include <Modloader/app/structs/IEndDragHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IEndDragHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEndDragHandler_DEFINED) && !defined(IL2CPP_STRUCT_IEndDragHandler_FWDDECL)
#include <Modloader/app/structs/IEndDragHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEndDragHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
