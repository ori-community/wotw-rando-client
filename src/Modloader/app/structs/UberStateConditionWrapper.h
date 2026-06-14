#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateConditionWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateConditionWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateConditionWrapper_DEFINED)
#include <Modloader/app/structs/UberStateConditionWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateConditionWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateConditionWrapper_DEFINED
struct UberStateConditionWrapper__Class;
struct UberStateConditionWrapper {
    struct UberStateConditionWrapper__Class* klass;
    MonitorData* monitor;
    struct UberStateConditionWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateConditionWrapper_FWDDECL)
#define IL2CPP_STRUCT_UberStateConditionWrapper_FWDDECL
#include <Modloader/app/structs/UberStateConditionWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateConditionWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateConditionWrapper_DEFINED) && !defined(IL2CPP_STRUCT_UberStateConditionWrapper_FWDDECL)
#include <Modloader/app/structs/UberStateConditionWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateConditionWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
