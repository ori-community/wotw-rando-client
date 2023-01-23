#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightAttackData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightAttackData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightAttackData_DEFINED)
#include <Modloader/app/structs/LightAttackData__Fields.h>
#if defined(IL2CPP_STRUCT_LightAttackData__Fields_DEFINED)
#define IL2CPP_STRUCT_LightAttackData_DEFINED
struct LightAttackData__Class;
struct LightAttackData {
    struct LightAttackData__Class* klass;
    MonitorData* monitor;
    struct LightAttackData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightAttackData_FWDDECL)
#define IL2CPP_STRUCT_LightAttackData_FWDDECL
#include <Modloader/app/structs/LightAttackData__Class.h>
#endif
#undef IL2CPP_STRUCT_LightAttackData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightAttackData_DEFINED) && !defined(IL2CPP_STRUCT_LightAttackData_FWDDECL)
#include <Modloader/app/structs/LightAttackData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightAttackData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
