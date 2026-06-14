#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CombinedMessageProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CombinedMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CombinedMessageProvider_DEFINED)
#include <Modloader/app/structs/CombinedMessageProvider__Fields.h>
#if defined(IL2CPP_STRUCT_CombinedMessageProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CombinedMessageProvider_DEFINED
struct CombinedMessageProvider__Class;
struct CombinedMessageProvider {
    struct CombinedMessageProvider__Class* klass;
    MonitorData* monitor;
    struct CombinedMessageProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CombinedMessageProvider_FWDDECL)
#define IL2CPP_STRUCT_CombinedMessageProvider_FWDDECL
#include <Modloader/app/structs/CombinedMessageProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CombinedMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CombinedMessageProvider_DEFINED) && !defined(IL2CPP_STRUCT_CombinedMessageProvider_FWDDECL)
#include <Modloader/app/structs/CombinedMessageProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CombinedMessageProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
