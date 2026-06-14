#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveWithCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveWithCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveWithCondition_DEFINED)
#include <Modloader/app/structs/MoveWithCondition__Fields.h>
#if defined(IL2CPP_STRUCT_MoveWithCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveWithCondition_DEFINED
struct MoveWithCondition__Class;
struct MoveWithCondition {
    struct MoveWithCondition__Class* klass;
    MonitorData* monitor;
    struct MoveWithCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveWithCondition_FWDDECL)
#define IL2CPP_STRUCT_MoveWithCondition_FWDDECL
#include <Modloader/app/structs/MoveWithCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_MoveWithCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveWithCondition_DEFINED) && !defined(IL2CPP_STRUCT_MoveWithCondition_FWDDECL)
#include <Modloader/app/structs/MoveWithCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveWithCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
