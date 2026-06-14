#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoPropertyInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoPropertyInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoPropertyInfo__Boxed_DEFINED)
#include <Modloader/app/structs/MonoPropertyInfo.h>
#if defined(IL2CPP_STRUCT_MonoPropertyInfo_DEFINED)
#define IL2CPP_STRUCT_MonoPropertyInfo__Boxed_DEFINED
struct MonoPropertyInfo__Class;
struct MonoPropertyInfo__Boxed {
    struct MonoPropertyInfo__Class* klass;
    MonitorData* monitor;
    struct MonoPropertyInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoPropertyInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MonoPropertyInfo__Boxed_FWDDECL
#include <Modloader/app/structs/MonoPropertyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoPropertyInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoPropertyInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MonoPropertyInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/MonoPropertyInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoPropertyInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
