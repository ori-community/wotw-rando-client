#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySein_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySein_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySein_DEFINED)
#include <Modloader/app/structs/BabySein__Fields.h>
#if defined(IL2CPP_STRUCT_BabySein__Fields_DEFINED)
#define IL2CPP_STRUCT_BabySein_DEFINED
struct BabySein__Class;
struct BabySein {
    struct BabySein__Class* klass;
    MonitorData* monitor;
    struct BabySein__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySein_FWDDECL)
#define IL2CPP_STRUCT_BabySein_FWDDECL
#include <Modloader/app/structs/BabySein__Class.h>
#endif
#undef IL2CPP_STRUCT_BabySein_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySein_DEFINED) && !defined(IL2CPP_STRUCT_BabySein_FWDDECL)
#include <Modloader/app/structs/BabySein.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySein.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
