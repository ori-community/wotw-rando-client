#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SByteTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SByteTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByteTypeInfo_DEFINED)
#include <Modloader/app/structs/SByteTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SByteTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SByteTypeInfo_DEFINED
struct SByteTypeInfo__Class;
struct SByteTypeInfo {
    struct SByteTypeInfo__Class* klass;
    MonitorData* monitor;
    struct SByteTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SByteTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_SByteTypeInfo_FWDDECL
#include <Modloader/app/structs/SByteTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SByteTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByteTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_SByteTypeInfo_FWDDECL)
#include <Modloader/app/structs/SByteTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SByteTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
