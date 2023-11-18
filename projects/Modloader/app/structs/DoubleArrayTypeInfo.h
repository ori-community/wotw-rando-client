#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/DoubleArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DoubleArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DoubleArrayTypeInfo_DEFINED
struct DoubleArrayTypeInfo__Class;
struct DoubleArrayTypeInfo {
    struct DoubleArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct DoubleArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoubleArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_DoubleArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/DoubleArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DoubleArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_DoubleArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/DoubleArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
