#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericMappingEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericMappingEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericMappingEntry_DEFINED)
#include <Modloader/app/structs/GenericMappingEntry__Fields.h>
#if defined(IL2CPP_STRUCT_GenericMappingEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericMappingEntry_DEFINED
struct GenericMappingEntry__Class;
struct GenericMappingEntry {
    struct GenericMappingEntry__Class* klass;
    MonitorData* monitor;
    struct GenericMappingEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericMappingEntry_FWDDECL)
#define IL2CPP_STRUCT_GenericMappingEntry_FWDDECL
#include <Modloader/app/structs/GenericMappingEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericMappingEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericMappingEntry_DEFINED) && !defined(IL2CPP_STRUCT_GenericMappingEntry_FWDDECL)
#include <Modloader/app/structs/GenericMappingEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericMappingEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
