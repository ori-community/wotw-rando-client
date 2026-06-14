#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocationModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocationModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocationModel_DEFINED)
#include <Modloader/app/structs/LocationModel__Fields.h>
#if defined(IL2CPP_STRUCT_LocationModel__Fields_DEFINED)
#define IL2CPP_STRUCT_LocationModel_DEFINED
struct LocationModel__Class;
struct LocationModel {
    struct LocationModel__Class* klass;
    MonitorData* monitor;
    struct LocationModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocationModel_FWDDECL)
#define IL2CPP_STRUCT_LocationModel_FWDDECL
#include <Modloader/app/structs/LocationModel__Class.h>
#endif
#undef IL2CPP_STRUCT_LocationModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocationModel_DEFINED) && !defined(IL2CPP_STRUCT_LocationModel_FWDDECL)
#include <Modloader/app/structs/LocationModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocationModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
