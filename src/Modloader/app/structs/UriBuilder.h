#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriBuilder_DEFINED)
#include <Modloader/app/structs/UriBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_UriBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_UriBuilder_DEFINED
struct UriBuilder__Class;
struct UriBuilder {
    struct UriBuilder__Class* klass;
    MonitorData* monitor;
    struct UriBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UriBuilder_FWDDECL)
#define IL2CPP_STRUCT_UriBuilder_FWDDECL
#include <Modloader/app/structs/UriBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_UriBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriBuilder_DEFINED) && !defined(IL2CPP_STRUCT_UriBuilder_FWDDECL)
#include <Modloader/app/structs/UriBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
