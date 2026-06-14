#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContainerFilterService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContainerFilterService_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContainerFilterService_DEFINED)
#define IL2CPP_STRUCT_ContainerFilterService_DEFINED
struct ContainerFilterService__Class;
struct ContainerFilterService {
    struct ContainerFilterService__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ContainerFilterService_FWDDECL)
#define IL2CPP_STRUCT_ContainerFilterService_FWDDECL
#include <Modloader/app/structs/ContainerFilterService__Class.h>
#endif
#undef IL2CPP_STRUCT_ContainerFilterService_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContainerFilterService_DEFINED) && !defined(IL2CPP_STRUCT_ContainerFilterService_FWDDECL)
#include <Modloader/app/structs/ContainerFilterService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContainerFilterService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
