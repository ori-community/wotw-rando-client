#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectMapInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectMapInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectMapInfo_DEFINED)
#include <Modloader/app/structs/ObjectMapInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectMapInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectMapInfo_DEFINED
struct ObjectMapInfo__Class;
struct ObjectMapInfo {
    struct ObjectMapInfo__Class* klass;
    MonitorData* monitor;
    struct ObjectMapInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectMapInfo_FWDDECL)
#define IL2CPP_STRUCT_ObjectMapInfo_FWDDECL
#include <Modloader/app/structs/ObjectMapInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectMapInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectMapInfo_DEFINED) && !defined(IL2CPP_STRUCT_ObjectMapInfo_FWDDECL)
#include <Modloader/app/structs/ObjectMapInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectMapInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
