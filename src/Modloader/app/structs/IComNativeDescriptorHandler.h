#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComNativeDescriptorHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComNativeDescriptorHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComNativeDescriptorHandler_DEFINED)
#define IL2CPP_STRUCT_IComNativeDescriptorHandler_DEFINED
struct IComNativeDescriptorHandler__Class;
struct IComNativeDescriptorHandler {
    struct IComNativeDescriptorHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IComNativeDescriptorHandler_FWDDECL)
#define IL2CPP_STRUCT_IComNativeDescriptorHandler_FWDDECL
#include <Modloader/app/structs/IComNativeDescriptorHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IComNativeDescriptorHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComNativeDescriptorHandler_DEFINED) && !defined(IL2CPP_STRUCT_IComNativeDescriptorHandler_FWDDECL)
#include <Modloader/app/structs/IComNativeDescriptorHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComNativeDescriptorHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
