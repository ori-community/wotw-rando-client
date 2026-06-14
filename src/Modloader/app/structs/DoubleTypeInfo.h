#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleTypeInfo_DEFINED)
#include <Modloader/app/structs/DoubleTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DoubleTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DoubleTypeInfo_DEFINED
struct DoubleTypeInfo__Class;
struct DoubleTypeInfo {
    struct DoubleTypeInfo__Class* klass;
    MonitorData* monitor;
    struct DoubleTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoubleTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_DoubleTypeInfo_FWDDECL
#include <Modloader/app/structs/DoubleTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DoubleTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_DoubleTypeInfo_FWDDECL)
#include <Modloader/app/structs/DoubleTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
