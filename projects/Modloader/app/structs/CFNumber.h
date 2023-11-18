#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFNumber_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFNumber_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNumber_DEFINED)
#include <Modloader/app/structs/CFNumber__Fields.h>
#if defined(IL2CPP_STRUCT_CFNumber__Fields_DEFINED)
#define IL2CPP_STRUCT_CFNumber_DEFINED
struct CFNumber__Class;
struct CFNumber {
    struct CFNumber__Class* klass;
    MonitorData* monitor;
    struct CFNumber__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFNumber_FWDDECL)
#define IL2CPP_STRUCT_CFNumber_FWDDECL
#include <Modloader/app/structs/CFNumber__Class.h>
#endif
#undef IL2CPP_STRUCT_CFNumber_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNumber_DEFINED) && !defined(IL2CPP_STRUCT_CFNumber_FWDDECL)
#include <Modloader/app/structs/CFNumber.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFNumber.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
