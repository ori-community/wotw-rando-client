#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HDREnabledCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HDREnabledCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HDREnabledCondition_DEFINED)
#include <Modloader/app/structs/HDREnabledCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HDREnabledCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HDREnabledCondition_DEFINED
struct HDREnabledCondition__Class;
struct HDREnabledCondition {
    struct HDREnabledCondition__Class* klass;
    MonitorData* monitor;
    struct HDREnabledCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HDREnabledCondition_FWDDECL)
#define IL2CPP_STRUCT_HDREnabledCondition_FWDDECL
#include <Modloader/app/structs/HDREnabledCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HDREnabledCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HDREnabledCondition_DEFINED) && !defined(IL2CPP_STRUCT_HDREnabledCondition_FWDDECL)
#include <Modloader/app/structs/HDREnabledCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HDREnabledCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
