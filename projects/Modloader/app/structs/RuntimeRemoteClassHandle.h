#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeRemoteClassHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeRemoteClassHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeRemoteClassHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeRemoteClassHandle_DEFINED
struct RuntimeStructs_RemoteClass;
struct RuntimeRemoteClassHandle {
    struct RuntimeStructs_RemoteClass* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeRemoteClassHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeRemoteClassHandle_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_RemoteClass.h>
#endif
#undef IL2CPP_STRUCT_RuntimeRemoteClassHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeRemoteClassHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeRemoteClassHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeRemoteClassHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeRemoteClassHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
