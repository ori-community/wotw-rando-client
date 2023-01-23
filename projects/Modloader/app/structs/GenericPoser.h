#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericPoser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericPoser_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPoser_DEFINED)
#include <Modloader/app/structs/GenericPoser__Fields.h>
#if defined(IL2CPP_STRUCT_GenericPoser__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericPoser_DEFINED
struct GenericPoser__Class;
struct GenericPoser {
    struct GenericPoser__Class* klass;
    MonitorData* monitor;
    struct GenericPoser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericPoser_FWDDECL)
#define IL2CPP_STRUCT_GenericPoser_FWDDECL
#include <Modloader/app/structs/GenericPoser__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericPoser_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPoser_DEFINED) && !defined(IL2CPP_STRUCT_GenericPoser_FWDDECL)
#include <Modloader/app/structs/GenericPoser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericPoser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
