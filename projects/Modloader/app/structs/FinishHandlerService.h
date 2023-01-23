#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FinishHandlerService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FinishHandlerService_INITIALIZING
#if !defined(IL2CPP_STRUCT_FinishHandlerService_DEFINED)
#include <Modloader/app/structs/FinishHandlerService__Fields.h>
#if defined(IL2CPP_STRUCT_FinishHandlerService__Fields_DEFINED)
#define IL2CPP_STRUCT_FinishHandlerService_DEFINED
struct FinishHandlerService__Class;
struct FinishHandlerService {
    struct FinishHandlerService__Class* klass;
    MonitorData* monitor;
    struct FinishHandlerService__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FinishHandlerService_FWDDECL)
#define IL2CPP_STRUCT_FinishHandlerService_FWDDECL
#include <Modloader/app/structs/FinishHandlerService__Class.h>
#endif
#undef IL2CPP_STRUCT_FinishHandlerService_INITIALIZING
#if !defined(IL2CPP_STRUCT_FinishHandlerService_DEFINED) && !defined(IL2CPP_STRUCT_FinishHandlerService_FWDDECL)
#include <Modloader/app/structs/FinishHandlerService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FinishHandlerService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
