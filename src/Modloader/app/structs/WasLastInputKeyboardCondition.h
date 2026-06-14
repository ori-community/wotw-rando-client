#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WasLastInputKeyboardCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WasLastInputKeyboardCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_WasLastInputKeyboardCondition_DEFINED)
#include <Modloader/app/structs/WasLastInputKeyboardCondition__Fields.h>
#if defined(IL2CPP_STRUCT_WasLastInputKeyboardCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_WasLastInputKeyboardCondition_DEFINED
struct WasLastInputKeyboardCondition__Class;
struct WasLastInputKeyboardCondition {
    struct WasLastInputKeyboardCondition__Class* klass;
    MonitorData* monitor;
    struct WasLastInputKeyboardCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WasLastInputKeyboardCondition_FWDDECL)
#define IL2CPP_STRUCT_WasLastInputKeyboardCondition_FWDDECL
#include <Modloader/app/structs/WasLastInputKeyboardCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_WasLastInputKeyboardCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_WasLastInputKeyboardCondition_DEFINED) && !defined(IL2CPP_STRUCT_WasLastInputKeyboardCondition_FWDDECL)
#include <Modloader/app/structs/WasLastInputKeyboardCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WasLastInputKeyboardCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
