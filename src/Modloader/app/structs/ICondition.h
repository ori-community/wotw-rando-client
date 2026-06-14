#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICondition_DEFINED)
#define IL2CPP_STRUCT_ICondition_DEFINED
struct ICondition__Class;
struct ICondition {
    struct ICondition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICondition_FWDDECL)
#define IL2CPP_STRUCT_ICondition_FWDDECL
#include <Modloader/app/structs/ICondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ICondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICondition_DEFINED) && !defined(IL2CPP_STRUCT_ICondition_FWDDECL)
#include <Modloader/app/structs/ICondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
