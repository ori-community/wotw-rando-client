#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureInfoConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureInfoConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfoConverter_DEFINED)
#include <Modloader/app/structs/CultureInfoConverter__Fields.h>
#if defined(IL2CPP_STRUCT_CultureInfoConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_CultureInfoConverter_DEFINED
struct CultureInfoConverter__Class;
struct CultureInfoConverter {
    struct CultureInfoConverter__Class* klass;
    MonitorData* monitor;
    struct CultureInfoConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CultureInfoConverter_FWDDECL)
#define IL2CPP_STRUCT_CultureInfoConverter_FWDDECL
#include <Modloader/app/structs/CultureInfoConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_CultureInfoConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfoConverter_DEFINED) && !defined(IL2CPP_STRUCT_CultureInfoConverter_FWDDECL)
#include <Modloader/app/structs/CultureInfoConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureInfoConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
