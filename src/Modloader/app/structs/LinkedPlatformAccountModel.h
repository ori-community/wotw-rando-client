#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkedPlatformAccountModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkedPlatformAccountModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkedPlatformAccountModel_DEFINED)
#include <Modloader/app/structs/LinkedPlatformAccountModel__Fields.h>
#if defined(IL2CPP_STRUCT_LinkedPlatformAccountModel__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkedPlatformAccountModel_DEFINED
struct LinkedPlatformAccountModel__Class;
struct LinkedPlatformAccountModel {
    struct LinkedPlatformAccountModel__Class* klass;
    MonitorData* monitor;
    struct LinkedPlatformAccountModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkedPlatformAccountModel_FWDDECL)
#define IL2CPP_STRUCT_LinkedPlatformAccountModel_FWDDECL
#include <Modloader/app/structs/LinkedPlatformAccountModel__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkedPlatformAccountModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkedPlatformAccountModel_DEFINED) && !defined(IL2CPP_STRUCT_LinkedPlatformAccountModel_FWDDECL)
#include <Modloader/app/structs/LinkedPlatformAccountModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkedPlatformAccountModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
