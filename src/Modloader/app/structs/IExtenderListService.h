#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IExtenderListService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IExtenderListService_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExtenderListService_DEFINED)
#define IL2CPP_STRUCT_IExtenderListService_DEFINED
struct IExtenderListService__Class;
struct IExtenderListService {
    struct IExtenderListService__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IExtenderListService_FWDDECL)
#define IL2CPP_STRUCT_IExtenderListService_FWDDECL
#include <Modloader/app/structs/IExtenderListService__Class.h>
#endif
#undef IL2CPP_STRUCT_IExtenderListService_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExtenderListService_DEFINED) && !defined(IL2CPP_STRUCT_IExtenderListService_FWDDECL)
#include <Modloader/app/structs/IExtenderListService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IExtenderListService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
