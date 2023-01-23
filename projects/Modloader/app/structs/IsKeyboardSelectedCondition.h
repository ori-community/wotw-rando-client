#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsKeyboardSelectedCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsKeyboardSelectedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsKeyboardSelectedCondition_DEFINED)
#include <Modloader/app/structs/IsKeyboardSelectedCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsKeyboardSelectedCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsKeyboardSelectedCondition_DEFINED
struct IsKeyboardSelectedCondition__Class;
struct IsKeyboardSelectedCondition {
    struct IsKeyboardSelectedCondition__Class* klass;
    MonitorData* monitor;
    struct IsKeyboardSelectedCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsKeyboardSelectedCondition_FWDDECL)
#define IL2CPP_STRUCT_IsKeyboardSelectedCondition_FWDDECL
#include <Modloader/app/structs/IsKeyboardSelectedCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsKeyboardSelectedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsKeyboardSelectedCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsKeyboardSelectedCondition_FWDDECL)
#include <Modloader/app/structs/IsKeyboardSelectedCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsKeyboardSelectedCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
