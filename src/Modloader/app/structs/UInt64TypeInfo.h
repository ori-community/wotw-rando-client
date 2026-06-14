#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt64TypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt64TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64TypeInfo_DEFINED)
#include <Modloader/app/structs/UInt64TypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UInt64TypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt64TypeInfo_DEFINED
struct UInt64TypeInfo__Class;
struct UInt64TypeInfo {
    struct UInt64TypeInfo__Class* klass;
    MonitorData* monitor;
    struct UInt64TypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt64TypeInfo_FWDDECL)
#define IL2CPP_STRUCT_UInt64TypeInfo_FWDDECL
#include <Modloader/app/structs/UInt64TypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt64TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64TypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_UInt64TypeInfo_FWDDECL)
#include <Modloader/app/structs/UInt64TypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt64TypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
