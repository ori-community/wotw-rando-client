#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPointerUpHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPointerUpHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerUpHandler_DEFINED)
#define IL2CPP_STRUCT_IPointerUpHandler_DEFINED
struct IPointerUpHandler__Class;
struct IPointerUpHandler {
    struct IPointerUpHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPointerUpHandler_FWDDECL)
#define IL2CPP_STRUCT_IPointerUpHandler_FWDDECL
#include <Modloader/app/structs/IPointerUpHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IPointerUpHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerUpHandler_DEFINED) && !defined(IL2CPP_STRUCT_IPointerUpHandler_FWDDECL)
#include <Modloader/app/structs/IPointerUpHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPointerUpHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
