#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadObjectInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadObjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadObjectInfo_DEFINED)
#include <Modloader/app/structs/ReadObjectInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ReadObjectInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ReadObjectInfo_DEFINED
struct ReadObjectInfo__Class;
struct ReadObjectInfo {
    struct ReadObjectInfo__Class* klass;
    MonitorData* monitor;
    struct ReadObjectInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadObjectInfo_FWDDECL)
#define IL2CPP_STRUCT_ReadObjectInfo_FWDDECL
#include <Modloader/app/structs/ReadObjectInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ReadObjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadObjectInfo_DEFINED) && !defined(IL2CPP_STRUCT_ReadObjectInfo_FWDDECL)
#include <Modloader/app/structs/ReadObjectInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadObjectInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
