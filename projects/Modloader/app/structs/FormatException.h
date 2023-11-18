#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatException_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatException_DEFINED)
#include <Modloader/app/structs/FormatException__Fields.h>
#if defined(IL2CPP_STRUCT_FormatException__Fields_DEFINED)
#define IL2CPP_STRUCT_FormatException_DEFINED
struct FormatException__Class;
struct FormatException {
    struct FormatException__Class* klass;
    MonitorData* monitor;
    struct FormatException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FormatException_FWDDECL)
#define IL2CPP_STRUCT_FormatException_FWDDECL
#include <Modloader/app/structs/FormatException__Class.h>
#endif
#undef IL2CPP_STRUCT_FormatException_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatException_DEFINED) && !defined(IL2CPP_STRUCT_FormatException_FWDDECL)
#include <Modloader/app/structs/FormatException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
