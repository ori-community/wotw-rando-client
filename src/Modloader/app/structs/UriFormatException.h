#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriFormatException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriFormatException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriFormatException_DEFINED)
#include <Modloader/app/structs/UriFormatException__Fields.h>
#if defined(IL2CPP_STRUCT_UriFormatException__Fields_DEFINED)
#define IL2CPP_STRUCT_UriFormatException_DEFINED
struct UriFormatException__Class;
struct UriFormatException {
    struct UriFormatException__Class* klass;
    MonitorData* monitor;
    struct UriFormatException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UriFormatException_FWDDECL)
#define IL2CPP_STRUCT_UriFormatException_FWDDECL
#include <Modloader/app/structs/UriFormatException__Class.h>
#endif
#undef IL2CPP_STRUCT_UriFormatException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriFormatException_DEFINED) && !defined(IL2CPP_STRUCT_UriFormatException_FWDDECL)
#include <Modloader/app/structs/UriFormatException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriFormatException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
