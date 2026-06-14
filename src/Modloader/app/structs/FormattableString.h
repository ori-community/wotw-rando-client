#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormattableString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormattableString_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormattableString_DEFINED)
#define IL2CPP_STRUCT_FormattableString_DEFINED
struct FormattableString__Class;
struct FormattableString {
    struct FormattableString__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FormattableString_FWDDECL)
#define IL2CPP_STRUCT_FormattableString_FWDDECL
#include <Modloader/app/structs/FormattableString__Class.h>
#endif
#undef IL2CPP_STRUCT_FormattableString_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormattableString_DEFINED) && !defined(IL2CPP_STRUCT_FormattableString_FWDDECL)
#include <Modloader/app/structs/FormattableString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormattableString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
