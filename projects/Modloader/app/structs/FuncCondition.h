#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FuncCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FuncCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FuncCondition_DEFINED)
#include <Modloader/app/structs/FuncCondition__Fields.h>
#if defined(IL2CPP_STRUCT_FuncCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_FuncCondition_DEFINED
struct FuncCondition__Class;
struct FuncCondition {
    struct FuncCondition__Class* klass;
    MonitorData* monitor;
    struct FuncCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FuncCondition_FWDDECL)
#define IL2CPP_STRUCT_FuncCondition_FWDDECL
#include <Modloader/app/structs/FuncCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_FuncCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FuncCondition_DEFINED) && !defined(IL2CPP_STRUCT_FuncCondition_FWDDECL)
#include <Modloader/app/structs/FuncCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FuncCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
