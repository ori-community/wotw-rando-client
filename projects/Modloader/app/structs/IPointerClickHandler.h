#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPointerClickHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPointerClickHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerClickHandler_DEFINED)
#define IL2CPP_STRUCT_IPointerClickHandler_DEFINED
struct IPointerClickHandler__Class;
struct IPointerClickHandler {
    struct IPointerClickHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPointerClickHandler_FWDDECL)
#define IL2CPP_STRUCT_IPointerClickHandler_FWDDECL
#include <Modloader/app/structs/IPointerClickHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IPointerClickHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerClickHandler_DEFINED) && !defined(IL2CPP_STRUCT_IPointerClickHandler_FWDDECL)
#include <Modloader/app/structs/IPointerClickHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPointerClickHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
