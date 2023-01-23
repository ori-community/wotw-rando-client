#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAliveCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAliveCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAliveCondition_DEFINED)
#include <Modloader/app/structs/SeinAliveCondition__Fields.h>
#if defined(IL2CPP_STRUCT_SeinAliveCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinAliveCondition_DEFINED
struct SeinAliveCondition__Class;
struct SeinAliveCondition {
    struct SeinAliveCondition__Class* klass;
    MonitorData* monitor;
    struct SeinAliveCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinAliveCondition_FWDDECL)
#define IL2CPP_STRUCT_SeinAliveCondition_FWDDECL
#include <Modloader/app/structs/SeinAliveCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinAliveCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAliveCondition_DEFINED) && !defined(IL2CPP_STRUCT_SeinAliveCondition_FWDDECL)
#include <Modloader/app/structs/SeinAliveCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAliveCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
