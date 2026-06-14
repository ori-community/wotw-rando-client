#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventIgnoreAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventIgnoreAttribute_DEFINED)
#define IL2CPP_STRUCT_EventIgnoreAttribute_DEFINED
struct EventIgnoreAttribute__Class;
struct EventIgnoreAttribute {
    struct EventIgnoreAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EventIgnoreAttribute_FWDDECL)
#define IL2CPP_STRUCT_EventIgnoreAttribute_FWDDECL
#include <Modloader/app/structs/EventIgnoreAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EventIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventIgnoreAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EventIgnoreAttribute_FWDDECL)
#include <Modloader/app/structs/EventIgnoreAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventIgnoreAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
