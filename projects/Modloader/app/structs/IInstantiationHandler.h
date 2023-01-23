#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInstantiationHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInstantiationHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInstantiationHandler_DEFINED)
#define IL2CPP_STRUCT_IInstantiationHandler_DEFINED
struct IInstantiationHandler__Class;
struct IInstantiationHandler {
    struct IInstantiationHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInstantiationHandler_FWDDECL)
#define IL2CPP_STRUCT_IInstantiationHandler_FWDDECL
#include <Modloader/app/structs/IInstantiationHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IInstantiationHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInstantiationHandler_DEFINED) && !defined(IL2CPP_STRUCT_IInstantiationHandler_FWDDECL)
#include <Modloader/app/structs/IInstantiationHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInstantiationHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
