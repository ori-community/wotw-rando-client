#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothFleeCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothFleeCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothFleeCondition_DEFINED)
#define IL2CPP_STRUCT_MothFleeCondition_DEFINED
struct MothFleeCondition__Class;
struct MothFleeCondition {
    struct MothFleeCondition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MothFleeCondition_FWDDECL)
#define IL2CPP_STRUCT_MothFleeCondition_FWDDECL
#include <Modloader/app/structs/MothFleeCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_MothFleeCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothFleeCondition_DEFINED) && !defined(IL2CPP_STRUCT_MothFleeCondition_FWDDECL)
#include <Modloader/app/structs/MothFleeCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothFleeCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
