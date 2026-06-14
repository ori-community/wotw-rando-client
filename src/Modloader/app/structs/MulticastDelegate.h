#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MulticastDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MulticastDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_MulticastDelegate_DEFINED)
#include <Modloader/app/structs/MulticastDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_MulticastDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_MulticastDelegate_DEFINED
struct MulticastDelegate__Class;
struct MulticastDelegate {
    struct MulticastDelegate__Class* klass;
    MonitorData* monitor;
    struct MulticastDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MulticastDelegate_FWDDECL)
#define IL2CPP_STRUCT_MulticastDelegate_FWDDECL
#include <Modloader/app/structs/MulticastDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_MulticastDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_MulticastDelegate_DEFINED) && !defined(IL2CPP_STRUCT_MulticastDelegate_FWDDECL)
#include <Modloader/app/structs/MulticastDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MulticastDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
