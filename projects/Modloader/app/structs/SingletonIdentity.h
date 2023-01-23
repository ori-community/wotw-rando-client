#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SingletonIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SingletonIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingletonIdentity_DEFINED)
#include <Modloader/app/structs/SingletonIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_SingletonIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_SingletonIdentity_DEFINED
struct SingletonIdentity__Class;
struct SingletonIdentity {
    struct SingletonIdentity__Class* klass;
    MonitorData* monitor;
    struct SingletonIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SingletonIdentity_FWDDECL)
#define IL2CPP_STRUCT_SingletonIdentity_FWDDECL
#include <Modloader/app/structs/SingletonIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_SingletonIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingletonIdentity_DEFINED) && !defined(IL2CPP_STRUCT_SingletonIdentity_FWDDECL)
#include <Modloader/app/structs/SingletonIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SingletonIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
