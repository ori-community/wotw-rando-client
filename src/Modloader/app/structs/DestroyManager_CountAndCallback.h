#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyManager_CountAndCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyManager_CountAndCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyManager_CountAndCallback_DEFINED)
#include <Modloader/app/structs/DestroyManager_CountAndCallback__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyManager_CountAndCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyManager_CountAndCallback_DEFINED
struct DestroyManager_CountAndCallback__Class;
struct DestroyManager_CountAndCallback {
    struct DestroyManager_CountAndCallback__Class* klass;
    MonitorData* monitor;
    struct DestroyManager_CountAndCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyManager_CountAndCallback_FWDDECL)
#define IL2CPP_STRUCT_DestroyManager_CountAndCallback_FWDDECL
#include <Modloader/app/structs/DestroyManager_CountAndCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyManager_CountAndCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyManager_CountAndCallback_DEFINED) && !defined(IL2CPP_STRUCT_DestroyManager_CountAndCallback_FWDDECL)
#include <Modloader/app/structs/DestroyManager_CountAndCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyManager_CountAndCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
