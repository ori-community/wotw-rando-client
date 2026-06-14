#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Os_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Os_INITIALIZING
#if !defined(IL2CPP_STRUCT_Os_DEFINED)
#include <Modloader/app/structs/Os__Fields.h>
#if defined(IL2CPP_STRUCT_Os__Fields_DEFINED)
#define IL2CPP_STRUCT_Os_DEFINED
struct Os__Class;
struct Os {
    struct Os__Class* klass;
    MonitorData* monitor;
    struct Os__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Os_FWDDECL)
#define IL2CPP_STRUCT_Os_FWDDECL
#include <Modloader/app/structs/Os__Class.h>
#endif
#undef IL2CPP_STRUCT_Os_INITIALIZING
#if !defined(IL2CPP_STRUCT_Os_DEFINED) && !defined(IL2CPP_STRUCT_Os_FWDDECL)
#include <Modloader/app/structs/Os.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Os.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
