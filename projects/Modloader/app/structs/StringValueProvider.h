#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringValueProvider_DEFINED)
#include <Modloader/app/structs/StringValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_StringValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_StringValueProvider_DEFINED
struct StringValueProvider__Class;
struct StringValueProvider {
    struct StringValueProvider__Class* klass;
    MonitorData* monitor;
    struct StringValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringValueProvider_FWDDECL)
#define IL2CPP_STRUCT_StringValueProvider_FWDDECL
#include <Modloader/app/structs/StringValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_StringValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_StringValueProvider_FWDDECL)
#include <Modloader/app/structs/StringValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
