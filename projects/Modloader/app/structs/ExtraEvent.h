#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtraEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtraEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtraEvent_DEFINED)
#include <Modloader/app/structs/ExtraEvent__Fields.h>
#if defined(IL2CPP_STRUCT_ExtraEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_ExtraEvent_DEFINED
struct ExtraEvent__Class;
struct ExtraEvent {
    struct ExtraEvent__Class* klass;
    MonitorData* monitor;
    struct ExtraEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExtraEvent_FWDDECL)
#define IL2CPP_STRUCT_ExtraEvent_FWDDECL
#include <Modloader/app/structs/ExtraEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_ExtraEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtraEvent_DEFINED) && !defined(IL2CPP_STRUCT_ExtraEvent_FWDDECL)
#include <Modloader/app/structs/ExtraEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtraEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
