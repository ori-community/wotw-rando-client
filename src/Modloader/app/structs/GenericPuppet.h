#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPuppet_DEFINED)
#include <Modloader/app/structs/GenericPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_GenericPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericPuppet_DEFINED
struct GenericPuppet__Class;
struct GenericPuppet {
    struct GenericPuppet__Class* klass;
    MonitorData* monitor;
    struct GenericPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericPuppet_FWDDECL)
#define IL2CPP_STRUCT_GenericPuppet_FWDDECL
#include <Modloader/app/structs/GenericPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPuppet_DEFINED) && !defined(IL2CPP_STRUCT_GenericPuppet_FWDDECL)
#include <Modloader/app/structs/GenericPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
