#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTypeInfo_DEFINED)
#include <Modloader/app/structs/MonoTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_MonoTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoTypeInfo_DEFINED
struct MonoTypeInfo__Class;
struct MonoTypeInfo {
    struct MonoTypeInfo__Class* klass;
    MonitorData* monitor;
    struct MonoTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_MonoTypeInfo_FWDDECL
#include <Modloader/app/structs/MonoTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_MonoTypeInfo_FWDDECL)
#include <Modloader/app/structs/MonoTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
