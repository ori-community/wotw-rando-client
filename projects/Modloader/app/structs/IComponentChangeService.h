#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComponentChangeService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComponentChangeService_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComponentChangeService_DEFINED)
#define IL2CPP_STRUCT_IComponentChangeService_DEFINED
struct IComponentChangeService__Class;
struct IComponentChangeService {
    struct IComponentChangeService__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IComponentChangeService_FWDDECL)
#define IL2CPP_STRUCT_IComponentChangeService_FWDDECL
#include <Modloader/app/structs/IComponentChangeService__Class.h>
#endif
#undef IL2CPP_STRUCT_IComponentChangeService_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComponentChangeService_DEFINED) && !defined(IL2CPP_STRUCT_IComponentChangeService_FWDDECL)
#include <Modloader/app/structs/IComponentChangeService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComponentChangeService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
