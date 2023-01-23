#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt64ArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt64ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64ArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/UInt64ArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UInt64ArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt64ArrayTypeInfo_DEFINED
struct UInt64ArrayTypeInfo__Class;
struct UInt64ArrayTypeInfo {
    struct UInt64ArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct UInt64ArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt64ArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_UInt64ArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/UInt64ArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt64ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt64ArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_UInt64ArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/UInt64ArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt64ArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
