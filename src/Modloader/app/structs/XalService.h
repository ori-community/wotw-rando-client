#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalService_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_DEFINED)
#include <Modloader/app/structs/XalService__Fields.h>
#if defined(IL2CPP_STRUCT_XalService__Fields_DEFINED)
#define IL2CPP_STRUCT_XalService_DEFINED
struct XalService__Class;
struct XalService {
    struct XalService__Class* klass;
    MonitorData* monitor;
    struct XalService__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalService_FWDDECL)
#define IL2CPP_STRUCT_XalService_FWDDECL
#include <Modloader/app/structs/XalService__Class.h>
#endif
#undef IL2CPP_STRUCT_XalService_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_DEFINED) && !defined(IL2CPP_STRUCT_XalService_FWDDECL)
#include <Modloader/app/structs/XalService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
