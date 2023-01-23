#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICancelHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICancelHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICancelHandler_DEFINED)
#define IL2CPP_STRUCT_ICancelHandler_DEFINED
struct ICancelHandler__Class;
struct ICancelHandler {
    struct ICancelHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICancelHandler_FWDDECL)
#define IL2CPP_STRUCT_ICancelHandler_FWDDECL
#include <Modloader/app/structs/ICancelHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ICancelHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICancelHandler_DEFINED) && !defined(IL2CPP_STRUCT_ICancelHandler_FWDDECL)
#include <Modloader/app/structs/ICancelHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICancelHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
