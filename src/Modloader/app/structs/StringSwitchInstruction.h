#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringSwitchInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringSwitchInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringSwitchInstruction_DEFINED)
#include <Modloader/app/structs/StringSwitchInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_StringSwitchInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_StringSwitchInstruction_DEFINED
struct StringSwitchInstruction__Class;
struct StringSwitchInstruction {
    struct StringSwitchInstruction__Class* klass;
    MonitorData* monitor;
    struct StringSwitchInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringSwitchInstruction_FWDDECL)
#define IL2CPP_STRUCT_StringSwitchInstruction_FWDDECL
#include <Modloader/app/structs/StringSwitchInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_StringSwitchInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringSwitchInstruction_DEFINED) && !defined(IL2CPP_STRUCT_StringSwitchInstruction_FWDDECL)
#include <Modloader/app/structs/StringSwitchInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringSwitchInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
