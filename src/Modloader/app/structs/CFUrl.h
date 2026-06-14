#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFUrl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFUrl_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFUrl_DEFINED)
#include <Modloader/app/structs/CFUrl__Fields.h>
#if defined(IL2CPP_STRUCT_CFUrl__Fields_DEFINED)
#define IL2CPP_STRUCT_CFUrl_DEFINED
struct CFUrl__Class;
struct CFUrl {
    struct CFUrl__Class* klass;
    MonitorData* monitor;
    struct CFUrl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFUrl_FWDDECL)
#define IL2CPP_STRUCT_CFUrl_FWDDECL
#include <Modloader/app/structs/CFUrl__Class.h>
#endif
#undef IL2CPP_STRUCT_CFUrl_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFUrl_DEFINED) && !defined(IL2CPP_STRUCT_CFUrl_FWDDECL)
#include <Modloader/app/structs/CFUrl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFUrl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
