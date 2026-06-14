#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericIdentity_DEFINED)
#include <Modloader/app/structs/GenericIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_GenericIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericIdentity_DEFINED
struct GenericIdentity__Class;
struct GenericIdentity {
    struct GenericIdentity__Class* klass;
    MonitorData* monitor;
    struct GenericIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericIdentity_FWDDECL)
#define IL2CPP_STRUCT_GenericIdentity_FWDDECL
#include <Modloader/app/structs/GenericIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericIdentity_DEFINED) && !defined(IL2CPP_STRUCT_GenericIdentity_FWDDECL)
#include <Modloader/app/structs/GenericIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
