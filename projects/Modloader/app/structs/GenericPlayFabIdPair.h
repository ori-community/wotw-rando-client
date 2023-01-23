#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericPlayFabIdPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericPlayFabIdPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPlayFabIdPair_DEFINED)
#include <Modloader/app/structs/GenericPlayFabIdPair__Fields.h>
#if defined(IL2CPP_STRUCT_GenericPlayFabIdPair__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericPlayFabIdPair_DEFINED
struct GenericPlayFabIdPair__Class;
struct GenericPlayFabIdPair {
    struct GenericPlayFabIdPair__Class* klass;
    MonitorData* monitor;
    struct GenericPlayFabIdPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericPlayFabIdPair_FWDDECL)
#define IL2CPP_STRUCT_GenericPlayFabIdPair_FWDDECL
#include <Modloader/app/structs/GenericPlayFabIdPair__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericPlayFabIdPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPlayFabIdPair_DEFINED) && !defined(IL2CPP_STRUCT_GenericPlayFabIdPair_FWDDECL)
#include <Modloader/app/structs/GenericPlayFabIdPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericPlayFabIdPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
