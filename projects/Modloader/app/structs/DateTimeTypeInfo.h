#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeTypeInfo_DEFINED)
#include <Modloader/app/structs/DateTimeTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DateTimeTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DateTimeTypeInfo_DEFINED
struct DateTimeTypeInfo__Class;
struct DateTimeTypeInfo {
    struct DateTimeTypeInfo__Class* klass;
    MonitorData* monitor;
    struct DateTimeTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_DateTimeTypeInfo_FWDDECL
#include <Modloader/app/structs/DateTimeTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeTypeInfo_FWDDECL)
#include <Modloader/app/structs/DateTimeTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
