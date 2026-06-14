#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KissingRig_Partner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KissingRig_Partner_INITIALIZING
#if !defined(IL2CPP_STRUCT_KissingRig_Partner_DEFINED)
#include <Modloader/app/structs/KissingRig_Partner__Fields.h>
#if defined(IL2CPP_STRUCT_KissingRig_Partner__Fields_DEFINED)
#define IL2CPP_STRUCT_KissingRig_Partner_DEFINED
struct KissingRig_Partner__Class;
struct KissingRig_Partner {
    struct KissingRig_Partner__Class* klass;
    MonitorData* monitor;
    struct KissingRig_Partner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KissingRig_Partner_FWDDECL)
#define IL2CPP_STRUCT_KissingRig_Partner_FWDDECL
#include <Modloader/app/structs/KissingRig_Partner__Class.h>
#endif
#undef IL2CPP_STRUCT_KissingRig_Partner_INITIALIZING
#if !defined(IL2CPP_STRUCT_KissingRig_Partner_DEFINED) && !defined(IL2CPP_STRUCT_KissingRig_Partner_FWDDECL)
#include <Modloader/app/structs/KissingRig_Partner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KissingRig_Partner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
