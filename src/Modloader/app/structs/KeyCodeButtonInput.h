#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyCodeButtonInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyCodeButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyCodeButtonInput_DEFINED)
#include <Modloader/app/structs/KeyCodeButtonInput__Fields.h>
#if defined(IL2CPP_STRUCT_KeyCodeButtonInput__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyCodeButtonInput_DEFINED
struct KeyCodeButtonInput__Class;
struct KeyCodeButtonInput {
    struct KeyCodeButtonInput__Class* klass;
    MonitorData* monitor;
    struct KeyCodeButtonInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyCodeButtonInput_FWDDECL)
#define IL2CPP_STRUCT_KeyCodeButtonInput_FWDDECL
#include <Modloader/app/structs/KeyCodeButtonInput__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyCodeButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyCodeButtonInput_DEFINED) && !defined(IL2CPP_STRUCT_KeyCodeButtonInput_FWDDECL)
#include <Modloader/app/structs/KeyCodeButtonInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyCodeButtonInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
