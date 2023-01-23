#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomResultTableListing_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomResultTableListing_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomResultTableListing_DEFINED)
#include <Modloader/app/structs/RandomResultTableListing__Fields.h>
#if defined(IL2CPP_STRUCT_RandomResultTableListing__Fields_DEFINED)
#define IL2CPP_STRUCT_RandomResultTableListing_DEFINED
struct RandomResultTableListing__Class;
struct RandomResultTableListing {
    struct RandomResultTableListing__Class* klass;
    MonitorData* monitor;
    struct RandomResultTableListing__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RandomResultTableListing_FWDDECL)
#define IL2CPP_STRUCT_RandomResultTableListing_FWDDECL
#include <Modloader/app/structs/RandomResultTableListing__Class.h>
#endif
#undef IL2CPP_STRUCT_RandomResultTableListing_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomResultTableListing_DEFINED) && !defined(IL2CPP_STRUCT_RandomResultTableListing_FWDDECL)
#include <Modloader/app/structs/RandomResultTableListing.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomResultTableListing.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
