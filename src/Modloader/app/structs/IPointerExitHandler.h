#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPointerExitHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPointerExitHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerExitHandler_DEFINED)
#define IL2CPP_STRUCT_IPointerExitHandler_DEFINED
struct IPointerExitHandler__Class;
struct IPointerExitHandler {
    struct IPointerExitHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPointerExitHandler_FWDDECL)
#define IL2CPP_STRUCT_IPointerExitHandler_FWDDECL
#include <Modloader/app/structs/IPointerExitHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IPointerExitHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerExitHandler_DEFINED) && !defined(IL2CPP_STRUCT_IPointerExitHandler_FWDDECL)
#include <Modloader/app/structs/IPointerExitHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPointerExitHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
