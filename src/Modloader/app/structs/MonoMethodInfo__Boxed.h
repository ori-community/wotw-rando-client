#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoMethodInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoMethodInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodInfo__Boxed_DEFINED)
#include <Modloader/app/structs/MonoMethodInfo.h>
#if defined(IL2CPP_STRUCT_MonoMethodInfo_DEFINED)
#define IL2CPP_STRUCT_MonoMethodInfo__Boxed_DEFINED
struct MonoMethodInfo__Class;
struct MonoMethodInfo__Boxed {
    struct MonoMethodInfo__Class* klass;
    MonitorData* monitor;
    struct MonoMethodInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoMethodInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MonoMethodInfo__Boxed_FWDDECL
#include <Modloader/app/structs/MonoMethodInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoMethodInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MonoMethodInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/MonoMethodInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoMethodInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
