#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CsEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CsEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsEvent_DEFINED)
#include <Modloader/app/structs/CsEvent__Fields.h>
#if defined(IL2CPP_STRUCT_CsEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_CsEvent_DEFINED
struct CsEvent__Class;
struct CsEvent {
    struct CsEvent__Class* klass;
    MonitorData* monitor;
    struct CsEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CsEvent_FWDDECL)
#define IL2CPP_STRUCT_CsEvent_FWDDECL
#include <Modloader/app/structs/CsEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_CsEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_CsEvent_DEFINED) && !defined(IL2CPP_STRUCT_CsEvent_FWDDECL)
#include <Modloader/app/structs/CsEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CsEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
