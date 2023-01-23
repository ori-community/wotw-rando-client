#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeObjectSecurity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeObjectSecurity_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeObjectSecurity_DEFINED)
#define IL2CPP_STRUCT_NativeObjectSecurity_DEFINED
struct NativeObjectSecurity__Class;
struct NativeObjectSecurity {
    struct NativeObjectSecurity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeObjectSecurity_FWDDECL)
#define IL2CPP_STRUCT_NativeObjectSecurity_FWDDECL
#include <Modloader/app/structs/NativeObjectSecurity__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeObjectSecurity_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeObjectSecurity_DEFINED) && !defined(IL2CPP_STRUCT_NativeObjectSecurity_FWDDECL)
#include <Modloader/app/structs/NativeObjectSecurity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeObjectSecurity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
