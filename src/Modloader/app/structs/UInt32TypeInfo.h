#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt32TypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt32TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt32TypeInfo_DEFINED)
#include <Modloader/app/structs/UInt32TypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UInt32TypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt32TypeInfo_DEFINED
struct UInt32TypeInfo__Class;
struct UInt32TypeInfo {
    struct UInt32TypeInfo__Class* klass;
    MonitorData* monitor;
    struct UInt32TypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt32TypeInfo_FWDDECL)
#define IL2CPP_STRUCT_UInt32TypeInfo_FWDDECL
#include <Modloader/app/structs/UInt32TypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt32TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt32TypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_UInt32TypeInfo_FWDDECL)
#include <Modloader/app/structs/UInt32TypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt32TypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
