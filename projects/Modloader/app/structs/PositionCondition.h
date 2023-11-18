#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionCondition_DEFINED)
#include <Modloader/app/structs/PositionCondition__Fields.h>
#if defined(IL2CPP_STRUCT_PositionCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionCondition_DEFINED
struct PositionCondition__Class;
struct PositionCondition {
    struct PositionCondition__Class* klass;
    MonitorData* monitor;
    struct PositionCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionCondition_FWDDECL)
#define IL2CPP_STRUCT_PositionCondition_FWDDECL
#include <Modloader/app/structs/PositionCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionCondition_DEFINED) && !defined(IL2CPP_STRUCT_PositionCondition_FWDDECL)
#include <Modloader/app/structs/PositionCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
