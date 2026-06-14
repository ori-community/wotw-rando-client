#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlwaysCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlwaysCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlwaysCondition_DEFINED)
#define IL2CPP_STRUCT_AlwaysCondition_DEFINED
struct AlwaysCondition__Class;
struct AlwaysCondition {
    struct AlwaysCondition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AlwaysCondition_FWDDECL)
#define IL2CPP_STRUCT_AlwaysCondition_FWDDECL
#include <Modloader/app/structs/AlwaysCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_AlwaysCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlwaysCondition_DEFINED) && !defined(IL2CPP_STRUCT_AlwaysCondition_FWDDECL)
#include <Modloader/app/structs/AlwaysCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlwaysCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
