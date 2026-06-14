#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkObjectInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkObjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkObjectInfo_DEFINED)
#include <Modloader/app/structs/AkObjectInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkObjectInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkObjectInfo_DEFINED
struct AkObjectInfo__Class;
struct AkObjectInfo {
    struct AkObjectInfo__Class* klass;
    MonitorData* monitor;
    struct AkObjectInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkObjectInfo_FWDDECL)
#define IL2CPP_STRUCT_AkObjectInfo_FWDDECL
#include <Modloader/app/structs/AkObjectInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkObjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkObjectInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkObjectInfo_FWDDECL)
#include <Modloader/app/structs/AkObjectInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkObjectInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
