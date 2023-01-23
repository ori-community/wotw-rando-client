#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetObjectInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetObjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetObjectInfo_DEFINED)
#include <Modloader/app/structs/SetObjectInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SetObjectInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SetObjectInfo_DEFINED
struct SetObjectInfo__Class;
struct SetObjectInfo {
    struct SetObjectInfo__Class* klass;
    MonitorData* monitor;
    struct SetObjectInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetObjectInfo_FWDDECL)
#define IL2CPP_STRUCT_SetObjectInfo_FWDDECL
#include <Modloader/app/structs/SetObjectInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SetObjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetObjectInfo_DEFINED) && !defined(IL2CPP_STRUCT_SetObjectInfo_FWDDECL)
#include <Modloader/app/structs/SetObjectInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetObjectInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
