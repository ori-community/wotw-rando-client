#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HoldingTorchCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HoldingTorchCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoldingTorchCondition_DEFINED)
#include <Modloader/app/structs/HoldingTorchCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HoldingTorchCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HoldingTorchCondition_DEFINED
struct HoldingTorchCondition__Class;
struct HoldingTorchCondition {
    struct HoldingTorchCondition__Class* klass;
    MonitorData* monitor;
    struct HoldingTorchCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HoldingTorchCondition_FWDDECL)
#define IL2CPP_STRUCT_HoldingTorchCondition_FWDDECL
#include <Modloader/app/structs/HoldingTorchCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HoldingTorchCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoldingTorchCondition_DEFINED) && !defined(IL2CPP_STRUCT_HoldingTorchCondition_FWDDECL)
#include <Modloader/app/structs/HoldingTorchCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HoldingTorchCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
