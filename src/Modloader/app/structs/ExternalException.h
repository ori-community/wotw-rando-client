#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExternalException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExternalException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalException_DEFINED)
#include <Modloader/app/structs/ExternalException__Fields.h>
#if defined(IL2CPP_STRUCT_ExternalException__Fields_DEFINED)
#define IL2CPP_STRUCT_ExternalException_DEFINED
struct ExternalException__Class;
struct ExternalException {
    struct ExternalException__Class* klass;
    MonitorData* monitor;
    struct ExternalException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExternalException_FWDDECL)
#define IL2CPP_STRUCT_ExternalException_FWDDECL
#include <Modloader/app/structs/ExternalException__Class.h>
#endif
#undef IL2CPP_STRUCT_ExternalException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalException_DEFINED) && !defined(IL2CPP_STRUCT_ExternalException_FWDDECL)
#include <Modloader/app/structs/ExternalException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExternalException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
