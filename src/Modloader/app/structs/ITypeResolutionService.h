#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITypeResolutionService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITypeResolutionService_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITypeResolutionService_DEFINED)
#define IL2CPP_STRUCT_ITypeResolutionService_DEFINED
struct ITypeResolutionService__Class;
struct ITypeResolutionService {
    struct ITypeResolutionService__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITypeResolutionService_FWDDECL)
#define IL2CPP_STRUCT_ITypeResolutionService_FWDDECL
#include <Modloader/app/structs/ITypeResolutionService__Class.h>
#endif
#undef IL2CPP_STRUCT_ITypeResolutionService_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITypeResolutionService_DEFINED) && !defined(IL2CPP_STRUCT_ITypeResolutionService_FWDDECL)
#include <Modloader/app/structs/ITypeResolutionService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITypeResolutionService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
