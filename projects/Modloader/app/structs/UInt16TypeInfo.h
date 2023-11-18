#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt16TypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt16TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16TypeInfo_DEFINED)
#include <Modloader/app/structs/UInt16TypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UInt16TypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt16TypeInfo_DEFINED
struct UInt16TypeInfo__Class;
struct UInt16TypeInfo {
    struct UInt16TypeInfo__Class* klass;
    MonitorData* monitor;
    struct UInt16TypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt16TypeInfo_FWDDECL)
#define IL2CPP_STRUCT_UInt16TypeInfo_FWDDECL
#include <Modloader/app/structs/UInt16TypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt16TypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16TypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_UInt16TypeInfo_FWDDECL)
#include <Modloader/app/structs/UInt16TypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt16TypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
