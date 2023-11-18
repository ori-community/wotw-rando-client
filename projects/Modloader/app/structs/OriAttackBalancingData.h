#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriAttackBalancingData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriAttackBalancingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriAttackBalancingData_DEFINED)
#include <Modloader/app/structs/OriAttackBalancingData__Fields.h>
#if defined(IL2CPP_STRUCT_OriAttackBalancingData__Fields_DEFINED)
#define IL2CPP_STRUCT_OriAttackBalancingData_DEFINED
struct OriAttackBalancingData__Class;
struct OriAttackBalancingData {
    struct OriAttackBalancingData__Class* klass;
    MonitorData* monitor;
    struct OriAttackBalancingData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriAttackBalancingData_FWDDECL)
#define IL2CPP_STRUCT_OriAttackBalancingData_FWDDECL
#include <Modloader/app/structs/OriAttackBalancingData__Class.h>
#endif
#undef IL2CPP_STRUCT_OriAttackBalancingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriAttackBalancingData_DEFINED) && !defined(IL2CPP_STRUCT_OriAttackBalancingData_FWDDECL)
#include <Modloader/app/structs/OriAttackBalancingData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriAttackBalancingData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
