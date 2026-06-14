#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteObjectInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteObjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteObjectInfo_DEFINED)
#include <Modloader/app/structs/WriteObjectInfo__Fields.h>
#if defined(IL2CPP_STRUCT_WriteObjectInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteObjectInfo_DEFINED
struct WriteObjectInfo__Class;
struct WriteObjectInfo {
    struct WriteObjectInfo__Class* klass;
    MonitorData* monitor;
    struct WriteObjectInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteObjectInfo_FWDDECL)
#define IL2CPP_STRUCT_WriteObjectInfo_FWDDECL
#include <Modloader/app/structs/WriteObjectInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteObjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteObjectInfo_DEFINED) && !defined(IL2CPP_STRUCT_WriteObjectInfo_FWDDECL)
#include <Modloader/app/structs/WriteObjectInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteObjectInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
