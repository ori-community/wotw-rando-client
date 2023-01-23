#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericSpring1D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericSpring1D_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericSpring1D_DEFINED)
#include <Modloader/app/structs/GenericSpring1D__Fields.h>
#if defined(IL2CPP_STRUCT_GenericSpring1D__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericSpring1D_DEFINED
struct GenericSpring1D__Class;
struct GenericSpring1D {
    struct GenericSpring1D__Class* klass;
    MonitorData* monitor;
    struct GenericSpring1D__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericSpring1D_FWDDECL)
#define IL2CPP_STRUCT_GenericSpring1D_FWDDECL
#include <Modloader/app/structs/GenericSpring1D__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericSpring1D_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericSpring1D_DEFINED) && !defined(IL2CPP_STRUCT_GenericSpring1D_FWDDECL)
#include <Modloader/app/structs/GenericSpring1D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericSpring1D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
