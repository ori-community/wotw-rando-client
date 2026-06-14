#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageProvider_DEFINED)
#include <Modloader/app/structs/MessageProvider__Fields.h>
#if defined(IL2CPP_STRUCT_MessageProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageProvider_DEFINED
struct MessageProvider__Class;
struct MessageProvider {
    struct MessageProvider__Class* klass;
    MonitorData* monitor;
    struct MessageProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageProvider_FWDDECL)
#define IL2CPP_STRUCT_MessageProvider_FWDDECL
#include <Modloader/app/structs/MessageProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageProvider_DEFINED) && !defined(IL2CPP_STRUCT_MessageProvider_FWDDECL)
#include <Modloader/app/structs/MessageProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
