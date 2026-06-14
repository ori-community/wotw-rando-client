#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyEvents_DEFINED)
#include <Modloader/app/structs/KeyEvents__Fields.h>
#if defined(IL2CPP_STRUCT_KeyEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyEvents_DEFINED
struct KeyEvents__Class;
struct KeyEvents {
    struct KeyEvents__Class* klass;
    MonitorData* monitor;
    struct KeyEvents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyEvents_FWDDECL)
#define IL2CPP_STRUCT_KeyEvents_FWDDECL
#include <Modloader/app/structs/KeyEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyEvents_DEFINED) && !defined(IL2CPP_STRUCT_KeyEvents_FWDDECL)
#include <Modloader/app/structs/KeyEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
