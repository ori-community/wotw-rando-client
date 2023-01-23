#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactEmailInfoModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactEmailInfoModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactEmailInfoModel_DEFINED)
#include <Modloader/app/structs/ContactEmailInfoModel__Fields.h>
#if defined(IL2CPP_STRUCT_ContactEmailInfoModel__Fields_DEFINED)
#define IL2CPP_STRUCT_ContactEmailInfoModel_DEFINED
struct ContactEmailInfoModel__Class;
struct ContactEmailInfoModel {
    struct ContactEmailInfoModel__Class* klass;
    MonitorData* monitor;
    struct ContactEmailInfoModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactEmailInfoModel_FWDDECL)
#define IL2CPP_STRUCT_ContactEmailInfoModel_FWDDECL
#include <Modloader/app/structs/ContactEmailInfoModel__Class.h>
#endif
#undef IL2CPP_STRUCT_ContactEmailInfoModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactEmailInfoModel_DEFINED) && !defined(IL2CPP_STRUCT_ContactEmailInfoModel_FWDDECL)
#include <Modloader/app/structs/ContactEmailInfoModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactEmailInfoModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
