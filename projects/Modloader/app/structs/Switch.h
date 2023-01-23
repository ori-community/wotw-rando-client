#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Switch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Switch_INITIALIZING
#if !defined(IL2CPP_STRUCT_Switch_DEFINED)
#include <Modloader/app/structs/Switch__Fields.h>
#if defined(IL2CPP_STRUCT_Switch__Fields_DEFINED)
#define IL2CPP_STRUCT_Switch_DEFINED
struct Switch__Class;
struct Switch {
    struct Switch__Class* klass;
    MonitorData* monitor;
    struct Switch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Switch_FWDDECL)
#define IL2CPP_STRUCT_Switch_FWDDECL
#include <Modloader/app/structs/Switch__Class.h>
#endif
#undef IL2CPP_STRUCT_Switch_INITIALIZING
#if !defined(IL2CPP_STRUCT_Switch_DEFINED) && !defined(IL2CPP_STRUCT_Switch_FWDDECL)
#include <Modloader/app/structs/Switch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Switch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
