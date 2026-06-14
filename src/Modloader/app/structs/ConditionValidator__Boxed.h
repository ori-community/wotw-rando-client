#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionValidator__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionValidator__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionValidator__Boxed_DEFINED)
#include <Modloader/app/structs/ConditionValidator.h>
#if defined(IL2CPP_STRUCT_ConditionValidator_DEFINED)
#define IL2CPP_STRUCT_ConditionValidator__Boxed_DEFINED
struct ConditionValidator__Class;
struct ConditionValidator__Boxed {
    struct ConditionValidator__Class* klass;
    MonitorData* monitor;
    struct ConditionValidator fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionValidator__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ConditionValidator__Boxed_FWDDECL
#include <Modloader/app/structs/ConditionValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionValidator__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionValidator__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ConditionValidator__Boxed_FWDDECL)
#include <Modloader/app/structs/ConditionValidator__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionValidator__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
