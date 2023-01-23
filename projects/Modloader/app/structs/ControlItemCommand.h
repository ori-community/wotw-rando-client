#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlItemCommand_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlItemCommand_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlItemCommand_DEFINED)
#include <Modloader/app/structs/ControlItemCommand__Fields.h>
#if defined(IL2CPP_STRUCT_ControlItemCommand__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlItemCommand_DEFINED
struct ControlItemCommand__Class;
struct ControlItemCommand {
    struct ControlItemCommand__Class* klass;
    MonitorData* monitor;
    struct ControlItemCommand__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlItemCommand_FWDDECL)
#define IL2CPP_STRUCT_ControlItemCommand_FWDDECL
#include <Modloader/app/structs/ControlItemCommand__Class.h>
#endif
#undef IL2CPP_STRUCT_ControlItemCommand_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlItemCommand_DEFINED) && !defined(IL2CPP_STRUCT_ControlItemCommand_FWDDECL)
#include <Modloader/app/structs/ControlItemCommand.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlItemCommand.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
