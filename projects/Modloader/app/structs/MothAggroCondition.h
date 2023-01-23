#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothAggroCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothAggroCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothAggroCondition_DEFINED)
#define IL2CPP_STRUCT_MothAggroCondition_DEFINED
struct MothAggroCondition__Class;
struct MothAggroCondition {
    struct MothAggroCondition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MothAggroCondition_FWDDECL)
#define IL2CPP_STRUCT_MothAggroCondition_FWDDECL
#include <Modloader/app/structs/MothAggroCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_MothAggroCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothAggroCondition_DEFINED) && !defined(IL2CPP_STRUCT_MothAggroCondition_FWDDECL)
#include <Modloader/app/structs/MothAggroCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothAggroCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
