#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericMesher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericMesher_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericMesher_DEFINED)
#include <Modloader/app/structs/GenericMesher__Fields.h>
#if defined(IL2CPP_STRUCT_GenericMesher__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericMesher_DEFINED
struct GenericMesher__Class;
struct GenericMesher {
    struct GenericMesher__Class* klass;
    MonitorData* monitor;
    struct GenericMesher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericMesher_FWDDECL)
#define IL2CPP_STRUCT_GenericMesher_FWDDECL
#include <Modloader/app/structs/GenericMesher__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericMesher_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericMesher_DEFINED) && !defined(IL2CPP_STRUCT_GenericMesher_FWDDECL)
#include <Modloader/app/structs/GenericMesher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericMesher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
