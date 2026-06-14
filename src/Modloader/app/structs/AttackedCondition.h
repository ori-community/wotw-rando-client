#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackedCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackedCondition_DEFINED)
#include <Modloader/app/structs/AttackedCondition__Fields.h>
#if defined(IL2CPP_STRUCT_AttackedCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_AttackedCondition_DEFINED
struct AttackedCondition__Class;
struct AttackedCondition {
    struct AttackedCondition__Class* klass;
    MonitorData* monitor;
    struct AttackedCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttackedCondition_FWDDECL)
#define IL2CPP_STRUCT_AttackedCondition_FWDDECL
#include <Modloader/app/structs/AttackedCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_AttackedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackedCondition_DEFINED) && !defined(IL2CPP_STRUCT_AttackedCondition_FWDDECL)
#include <Modloader/app/structs/AttackedCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackedCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
