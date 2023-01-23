#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectSecurity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectSecurity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectSecurity_DEFINED)
#define IL2CPP_STRUCT_ObjectSecurity_DEFINED
struct ObjectSecurity__Class;
struct ObjectSecurity {
    struct ObjectSecurity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectSecurity_FWDDECL)
#define IL2CPP_STRUCT_ObjectSecurity_FWDDECL
#include <Modloader/app/structs/ObjectSecurity__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectSecurity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectSecurity_DEFINED) && !defined(IL2CPP_STRUCT_ObjectSecurity_FWDDECL)
#include <Modloader/app/structs/ObjectSecurity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectSecurity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
