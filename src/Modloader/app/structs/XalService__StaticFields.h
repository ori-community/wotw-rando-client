#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalService__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalService__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService__StaticFields_DEFINED)
#include <Modloader/app/structs/XalTraceLevel__Enum.h>
#if defined(IL2CPP_STRUCT_XalTraceLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_XalService__StaticFields_DEFINED
struct XalService_XalLogCallback;
struct XalService;
struct XalService__StaticFields {
    struct XalService_XalLogCallback* LogCallback;
    XalTraceLevel__Enum TraceLevel;

    struct XalService* instance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalService__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XalService__StaticFields_FWDDECL
#include <Modloader/app/structs/XalService.h>
#include <Modloader/app/structs/XalService_XalLogCallback.h>
#endif
#undef IL2CPP_STRUCT_XalService__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XalService__StaticFields_FWDDECL)
#include <Modloader/app/structs/XalService__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalService__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
