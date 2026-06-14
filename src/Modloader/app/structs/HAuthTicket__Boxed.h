#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HAuthTicket__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HAuthTicket__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HAuthTicket__Boxed_DEFINED)
#include <Modloader/app/structs/HAuthTicket.h>
#if defined(IL2CPP_STRUCT_HAuthTicket_DEFINED)
#define IL2CPP_STRUCT_HAuthTicket__Boxed_DEFINED
struct HAuthTicket__Class;
struct HAuthTicket__Boxed {
    struct HAuthTicket__Class* klass;
    MonitorData* monitor;
    struct HAuthTicket fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HAuthTicket__Boxed_FWDDECL)
#define IL2CPP_STRUCT_HAuthTicket__Boxed_FWDDECL
#include <Modloader/app/structs/HAuthTicket__Class.h>
#endif
#undef IL2CPP_STRUCT_HAuthTicket__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HAuthTicket__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_HAuthTicket__Boxed_FWDDECL)
#include <Modloader/app/structs/HAuthTicket__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HAuthTicket__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
