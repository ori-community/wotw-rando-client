#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateConditionHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateConditionHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateConditionHelper_DEFINED)
#define IL2CPP_STRUCT_UberStateConditionHelper_DEFINED
struct UberStateConditionHelper__Class;
struct UberStateConditionHelper {
    struct UberStateConditionHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateConditionHelper_FWDDECL)
#define IL2CPP_STRUCT_UberStateConditionHelper_FWDDECL
#include <Modloader/app/structs/UberStateConditionHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateConditionHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateConditionHelper_DEFINED) && !defined(IL2CPP_STRUCT_UberStateConditionHelper_FWDDECL)
#include <Modloader/app/structs/UberStateConditionHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateConditionHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
