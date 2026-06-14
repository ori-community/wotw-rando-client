#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericPoser_Map_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericPoser_Map_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPoser_Map_DEFINED)
#include <Modloader/app/structs/GenericPoser_Map__Fields.h>
#if defined(IL2CPP_STRUCT_GenericPoser_Map__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericPoser_Map_DEFINED
struct GenericPoser_Map__Class;
struct GenericPoser_Map {
    struct GenericPoser_Map__Class* klass;
    MonitorData* monitor;
    struct GenericPoser_Map__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericPoser_Map_FWDDECL)
#define IL2CPP_STRUCT_GenericPoser_Map_FWDDECL
#include <Modloader/app/structs/GenericPoser_Map__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericPoser_Map_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPoser_Map_DEFINED) && !defined(IL2CPP_STRUCT_GenericPoser_Map_FWDDECL)
#include <Modloader/app/structs/GenericPoser_Map.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericPoser_Map.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
