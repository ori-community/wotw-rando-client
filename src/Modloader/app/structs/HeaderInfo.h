#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderInfo_DEFINED)
#include <Modloader/app/structs/HeaderInfo__Fields.h>
#if defined(IL2CPP_STRUCT_HeaderInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_HeaderInfo_DEFINED
struct HeaderInfo__Class;
struct HeaderInfo {
    struct HeaderInfo__Class* klass;
    MonitorData* monitor;
    struct HeaderInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeaderInfo_FWDDECL)
#define IL2CPP_STRUCT_HeaderInfo_FWDDECL
#include <Modloader/app/structs/HeaderInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_HeaderInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderInfo_DEFINED) && !defined(IL2CPP_STRUCT_HeaderInfo_FWDDECL)
#include <Modloader/app/structs/HeaderInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
