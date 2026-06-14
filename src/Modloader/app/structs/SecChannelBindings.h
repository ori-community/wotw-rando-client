#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecChannelBindings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecChannelBindings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecChannelBindings_DEFINED)
#include <Modloader/app/structs/SecChannelBindings__Fields.h>
#if defined(IL2CPP_STRUCT_SecChannelBindings__Fields_DEFINED)
#define IL2CPP_STRUCT_SecChannelBindings_DEFINED
struct SecChannelBindings__Class;
struct SecChannelBindings {
    struct SecChannelBindings__Class* klass;
    MonitorData* monitor;
    struct SecChannelBindings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecChannelBindings_FWDDECL)
#define IL2CPP_STRUCT_SecChannelBindings_FWDDECL
#include <Modloader/app/structs/SecChannelBindings__Class.h>
#endif
#undef IL2CPP_STRUCT_SecChannelBindings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecChannelBindings_DEFINED) && !defined(IL2CPP_STRUCT_SecChannelBindings_FWDDECL)
#include <Modloader/app/structs/SecChannelBindings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecChannelBindings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
