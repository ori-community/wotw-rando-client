#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BadSubseg_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BadSubseg_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadSubseg_DEFINED)
#include <Modloader/app/structs/BadSubseg__Fields.h>
#if defined(IL2CPP_STRUCT_BadSubseg__Fields_DEFINED)
#define IL2CPP_STRUCT_BadSubseg_DEFINED
struct BadSubseg__Class;
struct BadSubseg {
    struct BadSubseg__Class* klass;
    MonitorData* monitor;
    struct BadSubseg__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BadSubseg_FWDDECL)
#define IL2CPP_STRUCT_BadSubseg_FWDDECL
#include <Modloader/app/structs/BadSubseg__Class.h>
#endif
#undef IL2CPP_STRUCT_BadSubseg_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadSubseg_DEFINED) && !defined(IL2CPP_STRUCT_BadSubseg_FWDDECL)
#include <Modloader/app/structs/BadSubseg.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BadSubseg.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
