#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomerContent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomerContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomerContent_DEFINED)
#include <Modloader/app/structs/CustomerContent__Fields.h>
#if defined(IL2CPP_STRUCT_CustomerContent__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomerContent_DEFINED
struct CustomerContent__Class;
struct CustomerContent {
    struct CustomerContent__Class* klass;
    MonitorData* monitor;
    struct CustomerContent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomerContent_FWDDECL)
#define IL2CPP_STRUCT_CustomerContent_FWDDECL
#include <Modloader/app/structs/CustomerContent__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomerContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomerContent_DEFINED) && !defined(IL2CPP_STRUCT_CustomerContent_FWDDECL)
#include <Modloader/app/structs/CustomerContent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomerContent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
