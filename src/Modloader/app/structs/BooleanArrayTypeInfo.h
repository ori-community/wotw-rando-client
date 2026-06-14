#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/BooleanArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_BooleanArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_BooleanArrayTypeInfo_DEFINED
struct BooleanArrayTypeInfo__Class;
struct BooleanArrayTypeInfo {
    struct BooleanArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct BooleanArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BooleanArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_BooleanArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/BooleanArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_BooleanArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_BooleanArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/BooleanArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
