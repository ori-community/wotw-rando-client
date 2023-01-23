#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IScrollHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IScrollHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScrollHandler_DEFINED)
#define IL2CPP_STRUCT_IScrollHandler_DEFINED
struct IScrollHandler__Class;
struct IScrollHandler {
    struct IScrollHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IScrollHandler_FWDDECL)
#define IL2CPP_STRUCT_IScrollHandler_FWDDECL
#include <Modloader/app/structs/IScrollHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IScrollHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScrollHandler_DEFINED) && !defined(IL2CPP_STRUCT_IScrollHandler_FWDDECL)
#include <Modloader/app/structs/IScrollHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IScrollHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
