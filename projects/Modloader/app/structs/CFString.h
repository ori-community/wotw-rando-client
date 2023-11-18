#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFString_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFString_DEFINED)
#include <Modloader/app/structs/CFString__Fields.h>
#if defined(IL2CPP_STRUCT_CFString__Fields_DEFINED)
#define IL2CPP_STRUCT_CFString_DEFINED
struct CFString__Class;
struct CFString {
    struct CFString__Class* klass;
    MonitorData* monitor;
    struct CFString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFString_FWDDECL)
#define IL2CPP_STRUCT_CFString_FWDDECL
#include <Modloader/app/structs/CFString__Class.h>
#endif
#undef IL2CPP_STRUCT_CFString_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFString_DEFINED) && !defined(IL2CPP_STRUCT_CFString_FWDDECL)
#include <Modloader/app/structs/CFString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
