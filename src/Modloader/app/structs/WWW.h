#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WWW_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WWW_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWW_DEFINED)
#include <Modloader/app/structs/WWW__Fields.h>
#if defined(IL2CPP_STRUCT_WWW__Fields_DEFINED)
#define IL2CPP_STRUCT_WWW_DEFINED
struct WWW__Class;
struct WWW {
    struct WWW__Class* klass;
    MonitorData* monitor;
    struct WWW__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WWW_FWDDECL)
#define IL2CPP_STRUCT_WWW_FWDDECL
#include <Modloader/app/structs/WWW__Class.h>
#endif
#undef IL2CPP_STRUCT_WWW_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWW_DEFINED) && !defined(IL2CPP_STRUCT_WWW_FWDDECL)
#include <Modloader/app/structs/WWW.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WWW.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
