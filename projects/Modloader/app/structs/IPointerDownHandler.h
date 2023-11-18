#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPointerDownHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPointerDownHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerDownHandler_DEFINED)
#define IL2CPP_STRUCT_IPointerDownHandler_DEFINED
struct IPointerDownHandler__Class;
struct IPointerDownHandler {
    struct IPointerDownHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPointerDownHandler_FWDDECL)
#define IL2CPP_STRUCT_IPointerDownHandler_FWDDECL
#include <Modloader/app/structs/IPointerDownHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IPointerDownHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerDownHandler_DEFINED) && !defined(IL2CPP_STRUCT_IPointerDownHandler_FWDDECL)
#include <Modloader/app/structs/IPointerDownHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPointerDownHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
