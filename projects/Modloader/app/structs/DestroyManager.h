#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyManager_DEFINED)
#include <Modloader/app/structs/DestroyManager__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyManager_DEFINED
struct DestroyManager__Class;
struct DestroyManager {
    struct DestroyManager__Class* klass;
    MonitorData* monitor;
    struct DestroyManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyManager_FWDDECL)
#define IL2CPP_STRUCT_DestroyManager_FWDDECL
#include <Modloader/app/structs/DestroyManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyManager_DEFINED) && !defined(IL2CPP_STRUCT_DestroyManager_FWDDECL)
#include <Modloader/app/structs/DestroyManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
