#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SByteArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SByteArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByteArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/SByteArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SByteArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SByteArrayTypeInfo_DEFINED
struct SByteArrayTypeInfo__Class;
struct SByteArrayTypeInfo {
    struct SByteArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct SByteArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SByteArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_SByteArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/SByteArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SByteArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByteArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_SByteArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/SByteArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SByteArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
