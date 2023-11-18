#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastProvider_DEFINED)
#include <Modloader/app/structs/ContrastProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ContrastProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastProvider_DEFINED
struct ContrastProvider__Class;
struct ContrastProvider {
    struct ContrastProvider__Class* klass;
    MonitorData* monitor;
    struct ContrastProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastProvider_FWDDECL)
#define IL2CPP_STRUCT_ContrastProvider_FWDDECL
#include <Modloader/app/structs/ContrastProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ContrastProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastProvider_DEFINED) && !defined(IL2CPP_STRUCT_ContrastProvider_FWDDECL)
#include <Modloader/app/structs/ContrastProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
