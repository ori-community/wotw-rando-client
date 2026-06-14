#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPointerEnterHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPointerEnterHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerEnterHandler_DEFINED)
#define IL2CPP_STRUCT_IPointerEnterHandler_DEFINED
struct IPointerEnterHandler__Class;
struct IPointerEnterHandler {
    struct IPointerEnterHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPointerEnterHandler_FWDDECL)
#define IL2CPP_STRUCT_IPointerEnterHandler_FWDDECL
#include <Modloader/app/structs/IPointerEnterHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IPointerEnterHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPointerEnterHandler_DEFINED) && !defined(IL2CPP_STRUCT_IPointerEnterHandler_FWDDECL)
#include <Modloader/app/structs/IPointerEnterHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPointerEnterHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
