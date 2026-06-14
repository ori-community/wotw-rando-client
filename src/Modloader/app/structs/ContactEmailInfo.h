#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactEmailInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactEmailInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactEmailInfo_DEFINED)
#include <Modloader/app/structs/ContactEmailInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ContactEmailInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ContactEmailInfo_DEFINED
struct ContactEmailInfo__Class;
struct ContactEmailInfo {
    struct ContactEmailInfo__Class* klass;
    MonitorData* monitor;
    struct ContactEmailInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactEmailInfo_FWDDECL)
#define IL2CPP_STRUCT_ContactEmailInfo_FWDDECL
#include <Modloader/app/structs/ContactEmailInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ContactEmailInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactEmailInfo_DEFINED) && !defined(IL2CPP_STRUCT_ContactEmailInfo_FWDDECL)
#include <Modloader/app/structs/ContactEmailInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactEmailInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
