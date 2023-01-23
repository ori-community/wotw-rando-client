#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PressAnyButtonPrompt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PressAnyButtonPrompt_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressAnyButtonPrompt_DEFINED)
#include <Modloader/app/structs/PressAnyButtonPrompt__Fields.h>
#if defined(IL2CPP_STRUCT_PressAnyButtonPrompt__Fields_DEFINED)
#define IL2CPP_STRUCT_PressAnyButtonPrompt_DEFINED
struct PressAnyButtonPrompt__Class;
struct PressAnyButtonPrompt {
    struct PressAnyButtonPrompt__Class* klass;
    MonitorData* monitor;
    struct PressAnyButtonPrompt__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PressAnyButtonPrompt_FWDDECL)
#define IL2CPP_STRUCT_PressAnyButtonPrompt_FWDDECL
#include <Modloader/app/structs/PressAnyButtonPrompt__Class.h>
#endif
#undef IL2CPP_STRUCT_PressAnyButtonPrompt_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressAnyButtonPrompt_DEFINED) && !defined(IL2CPP_STRUCT_PressAnyButtonPrompt_FWDDECL)
#include <Modloader/app/structs/PressAnyButtonPrompt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PressAnyButtonPrompt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
