#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CommonObjectSecurity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CommonObjectSecurity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommonObjectSecurity_DEFINED)
#define IL2CPP_STRUCT_CommonObjectSecurity_DEFINED
struct CommonObjectSecurity__Class;
struct CommonObjectSecurity {
    struct CommonObjectSecurity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CommonObjectSecurity_FWDDECL)
#define IL2CPP_STRUCT_CommonObjectSecurity_FWDDECL
#include <Modloader/app/structs/CommonObjectSecurity__Class.h>
#endif
#undef IL2CPP_STRUCT_CommonObjectSecurity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommonObjectSecurity_DEFINED) && !defined(IL2CPP_STRUCT_CommonObjectSecurity_FWDDECL)
#include <Modloader/app/structs/CommonObjectSecurity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CommonObjectSecurity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
