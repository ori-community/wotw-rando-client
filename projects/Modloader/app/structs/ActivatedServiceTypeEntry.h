#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivatedServiceTypeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivatedServiceTypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivatedServiceTypeEntry_DEFINED)
#include <Modloader/app/structs/ActivatedServiceTypeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_ActivatedServiceTypeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivatedServiceTypeEntry_DEFINED
struct ActivatedServiceTypeEntry__Class;
struct ActivatedServiceTypeEntry {
    struct ActivatedServiceTypeEntry__Class* klass;
    MonitorData* monitor;
    struct ActivatedServiceTypeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivatedServiceTypeEntry_FWDDECL)
#define IL2CPP_STRUCT_ActivatedServiceTypeEntry_FWDDECL
#include <Modloader/app/structs/ActivatedServiceTypeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivatedServiceTypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivatedServiceTypeEntry_DEFINED) && !defined(IL2CPP_STRUCT_ActivatedServiceTypeEntry_FWDDECL)
#include <Modloader/app/structs/ActivatedServiceTypeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivatedServiceTypeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
