#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriTypeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriTypeConverter_DEFINED)
#define IL2CPP_STRUCT_UriTypeConverter_DEFINED
struct UriTypeConverter__Class;
struct UriTypeConverter {
    struct UriTypeConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UriTypeConverter_FWDDECL)
#define IL2CPP_STRUCT_UriTypeConverter_FWDDECL
#include <Modloader/app/structs/UriTypeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_UriTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriTypeConverter_DEFINED) && !defined(IL2CPP_STRUCT_UriTypeConverter_FWDDECL)
#include <Modloader/app/structs/UriTypeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriTypeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
