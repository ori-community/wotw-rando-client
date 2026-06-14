#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionUberState_DEFINED)
#include <Modloader/app/structs/ConditionUberState__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionUberState_DEFINED
struct ConditionUberState__Class;
struct ConditionUberState {
    struct ConditionUberState__Class* klass;
    MonitorData* monitor;
    struct ConditionUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionUberState_FWDDECL)
#define IL2CPP_STRUCT_ConditionUberState_FWDDECL
#include <Modloader/app/structs/ConditionUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionUberState_DEFINED) && !defined(IL2CPP_STRUCT_ConditionUberState_FWDDECL)
#include <Modloader/app/structs/ConditionUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
