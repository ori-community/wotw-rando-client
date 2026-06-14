#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestoreHealthPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestoreHealthPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreHealthPickup_DEFINED)
#include <Modloader/app/structs/RestoreHealthPickup__Fields.h>
#if defined(IL2CPP_STRUCT_RestoreHealthPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_RestoreHealthPickup_DEFINED
struct RestoreHealthPickup__Class;
struct RestoreHealthPickup {
    struct RestoreHealthPickup__Class* klass;
    MonitorData* monitor;
    struct RestoreHealthPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestoreHealthPickup_FWDDECL)
#define IL2CPP_STRUCT_RestoreHealthPickup_FWDDECL
#include <Modloader/app/structs/RestoreHealthPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_RestoreHealthPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreHealthPickup_DEFINED) && !defined(IL2CPP_STRUCT_RestoreHealthPickup_FWDDECL)
#include <Modloader/app/structs/RestoreHealthPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestoreHealthPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
