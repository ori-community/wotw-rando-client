#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecimalTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecimalTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecimalTypeInfo_DEFINED)
#include <Modloader/app/structs/DecimalTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DecimalTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DecimalTypeInfo_DEFINED
struct DecimalTypeInfo__Class;
struct DecimalTypeInfo {
    struct DecimalTypeInfo__Class* klass;
    MonitorData* monitor;
    struct DecimalTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecimalTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_DecimalTypeInfo_FWDDECL
#include <Modloader/app/structs/DecimalTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DecimalTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecimalTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_DecimalTypeInfo_FWDDECL)
#include <Modloader/app/structs/DecimalTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecimalTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
