#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BadImageFormatException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BadImageFormatException_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadImageFormatException_DEFINED)
#include <Modloader/app/structs/BadImageFormatException__Fields.h>
#if defined(IL2CPP_STRUCT_BadImageFormatException__Fields_DEFINED)
#define IL2CPP_STRUCT_BadImageFormatException_DEFINED
struct BadImageFormatException__Class;
struct BadImageFormatException {
    struct BadImageFormatException__Class* klass;
    MonitorData* monitor;
    struct BadImageFormatException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BadImageFormatException_FWDDECL)
#define IL2CPP_STRUCT_BadImageFormatException_FWDDECL
#include <Modloader/app/structs/BadImageFormatException__Class.h>
#endif
#undef IL2CPP_STRUCT_BadImageFormatException_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadImageFormatException_DEFINED) && !defined(IL2CPP_STRUCT_BadImageFormatException_FWDDECL)
#include <Modloader/app/structs/BadImageFormatException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BadImageFormatException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
