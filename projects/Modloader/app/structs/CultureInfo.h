#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfo_DEFINED)
#include <Modloader/app/structs/CultureInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CultureInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CultureInfo_DEFINED
struct CultureInfo__Class;
struct CultureInfo {
    struct CultureInfo__Class* klass;
    MonitorData* monitor;
    struct CultureInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CultureInfo_FWDDECL)
#define IL2CPP_STRUCT_CultureInfo_FWDDECL
#include <Modloader/app/structs/CultureInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CultureInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfo_DEFINED) && !defined(IL2CPP_STRUCT_CultureInfo_FWDDECL)
#include <Modloader/app/structs/CultureInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
