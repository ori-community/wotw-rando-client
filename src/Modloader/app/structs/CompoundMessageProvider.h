#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundMessageProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundMessageProvider_DEFINED)
#include <Modloader/app/structs/CompoundMessageProvider__Fields.h>
#if defined(IL2CPP_STRUCT_CompoundMessageProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundMessageProvider_DEFINED
struct CompoundMessageProvider__Class;
struct CompoundMessageProvider {
    struct CompoundMessageProvider__Class* klass;
    MonitorData* monitor;
    struct CompoundMessageProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompoundMessageProvider_FWDDECL)
#define IL2CPP_STRUCT_CompoundMessageProvider_FWDDECL
#include <Modloader/app/structs/CompoundMessageProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CompoundMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundMessageProvider_DEFINED) && !defined(IL2CPP_STRUCT_CompoundMessageProvider_FWDDECL)
#include <Modloader/app/structs/CompoundMessageProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundMessageProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
