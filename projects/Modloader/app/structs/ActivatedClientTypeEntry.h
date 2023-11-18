#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivatedClientTypeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivatedClientTypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivatedClientTypeEntry_DEFINED)
#include <Modloader/app/structs/ActivatedClientTypeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivatedClientTypeEntry_DEFINED
struct ActivatedClientTypeEntry__Class;
struct ActivatedClientTypeEntry {
    struct ActivatedClientTypeEntry__Class* klass;
    MonitorData* monitor;
    struct ActivatedClientTypeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivatedClientTypeEntry_FWDDECL)
#define IL2CPP_STRUCT_ActivatedClientTypeEntry_FWDDECL
#include <Modloader/app/structs/ActivatedClientTypeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivatedClientTypeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivatedClientTypeEntry_DEFINED) && !defined(IL2CPP_STRUCT_ActivatedClientTypeEntry_FWDDECL)
#include <Modloader/app/structs/ActivatedClientTypeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivatedClientTypeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
