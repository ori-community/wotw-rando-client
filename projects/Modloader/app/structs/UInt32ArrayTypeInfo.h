#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt32ArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt32ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt32ArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/UInt32ArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UInt32ArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UInt32ArrayTypeInfo_DEFINED
struct UInt32ArrayTypeInfo__Class;
struct UInt32ArrayTypeInfo {
    struct UInt32ArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct UInt32ArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UInt32ArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_UInt32ArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/UInt32ArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt32ArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt32ArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_UInt32ArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/UInt32ArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt32ArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
