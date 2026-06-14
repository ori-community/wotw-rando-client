#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandString_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandString_DEFINED)
#include <Modloader/app/structs/ExpandString__Fields.h>
#if defined(IL2CPP_STRUCT_ExpandString__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandString_DEFINED
struct ExpandString__Class;
struct ExpandString {
    struct ExpandString__Class* klass;
    MonitorData* monitor;
    struct ExpandString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpandString_FWDDECL)
#define IL2CPP_STRUCT_ExpandString_FWDDECL
#include <Modloader/app/structs/ExpandString__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpandString_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandString_DEFINED) && !defined(IL2CPP_STRUCT_ExpandString_FWDDECL)
#include <Modloader/app/structs/ExpandString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
