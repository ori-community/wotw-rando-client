#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericServiceId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericServiceId_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericServiceId_DEFINED)
#include <Modloader/app/structs/GenericServiceId__Fields.h>
#if defined(IL2CPP_STRUCT_GenericServiceId__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericServiceId_DEFINED
struct GenericServiceId__Class;
struct GenericServiceId {
    struct GenericServiceId__Class* klass;
    MonitorData* monitor;
    struct GenericServiceId__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericServiceId_FWDDECL)
#define IL2CPP_STRUCT_GenericServiceId_FWDDECL
#include <Modloader/app/structs/GenericServiceId__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericServiceId_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericServiceId_DEFINED) && !defined(IL2CPP_STRUCT_GenericServiceId_FWDDECL)
#include <Modloader/app/structs/GenericServiceId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericServiceId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
