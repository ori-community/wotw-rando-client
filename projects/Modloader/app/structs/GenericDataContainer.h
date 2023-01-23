#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericDataContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericDataContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericDataContainer_DEFINED)
#include <Modloader/app/structs/GenericDataContainer__Fields.h>
#if defined(IL2CPP_STRUCT_GenericDataContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericDataContainer_DEFINED
struct GenericDataContainer__Class;
struct GenericDataContainer {
    struct GenericDataContainer__Class* klass;
    MonitorData* monitor;
    struct GenericDataContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericDataContainer_FWDDECL)
#define IL2CPP_STRUCT_GenericDataContainer_FWDDECL
#include <Modloader/app/structs/GenericDataContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericDataContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericDataContainer_DEFINED) && !defined(IL2CPP_STRUCT_GenericDataContainer_FWDDECL)
#include <Modloader/app/structs/GenericDataContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericDataContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
