#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SingleCallIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SingleCallIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleCallIdentity_DEFINED)
#include <Modloader/app/structs/SingleCallIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_SingleCallIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_SingleCallIdentity_DEFINED
struct SingleCallIdentity__Class;
struct SingleCallIdentity {
    struct SingleCallIdentity__Class* klass;
    MonitorData* monitor;
    struct SingleCallIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SingleCallIdentity_FWDDECL)
#define IL2CPP_STRUCT_SingleCallIdentity_FWDDECL
#include <Modloader/app/structs/SingleCallIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_SingleCallIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleCallIdentity_DEFINED) && !defined(IL2CPP_STRUCT_SingleCallIdentity_FWDDECL)
#include <Modloader/app/structs/SingleCallIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SingleCallIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
