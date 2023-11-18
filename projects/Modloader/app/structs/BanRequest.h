#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BanRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BanRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanRequest_DEFINED)
#include <Modloader/app/structs/BanRequest__Fields.h>
#if defined(IL2CPP_STRUCT_BanRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_BanRequest_DEFINED
struct BanRequest__Class;
struct BanRequest {
    struct BanRequest__Class* klass;
    MonitorData* monitor;
    struct BanRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BanRequest_FWDDECL)
#define IL2CPP_STRUCT_BanRequest_FWDDECL
#include <Modloader/app/structs/BanRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_BanRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanRequest_DEFINED) && !defined(IL2CPP_STRUCT_BanRequest_FWDDECL)
#include <Modloader/app/structs/BanRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BanRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
