#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTrigger_DEFINED)
#include <Modloader/app/structs/InputTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_InputTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_InputTrigger_DEFINED
struct InputTrigger__Class;
struct InputTrigger {
    struct InputTrigger__Class* klass;
    MonitorData* monitor;
    struct InputTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputTrigger_FWDDECL)
#define IL2CPP_STRUCT_InputTrigger_FWDDECL
#include <Modloader/app/structs/InputTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_InputTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTrigger_DEFINED) && !defined(IL2CPP_STRUCT_InputTrigger_FWDDECL)
#include <Modloader/app/structs/InputTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
