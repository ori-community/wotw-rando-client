#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ButtonPressedCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ButtonPressedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonPressedCondition_DEFINED)
#include <Modloader/app/structs/ButtonPressedCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ButtonPressedCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ButtonPressedCondition_DEFINED
struct ButtonPressedCondition__Class;
struct ButtonPressedCondition {
    struct ButtonPressedCondition__Class* klass;
    MonitorData* monitor;
    struct ButtonPressedCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ButtonPressedCondition_FWDDECL)
#define IL2CPP_STRUCT_ButtonPressedCondition_FWDDECL
#include <Modloader/app/structs/ButtonPressedCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ButtonPressedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonPressedCondition_DEFINED) && !defined(IL2CPP_STRUCT_ButtonPressedCondition_FWDDECL)
#include <Modloader/app/structs/ButtonPressedCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ButtonPressedCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
