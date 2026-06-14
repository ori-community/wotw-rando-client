#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DealDamageSphere_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DealDamageSphere_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageSphere_DEFINED)
#include <Modloader/app/structs/DealDamageSphere__Fields.h>
#if defined(IL2CPP_STRUCT_DealDamageSphere__Fields_DEFINED)
#define IL2CPP_STRUCT_DealDamageSphere_DEFINED
struct DealDamageSphere__Class;
struct DealDamageSphere {
    struct DealDamageSphere__Class* klass;
    MonitorData* monitor;
    struct DealDamageSphere__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DealDamageSphere_FWDDECL)
#define IL2CPP_STRUCT_DealDamageSphere_FWDDECL
#include <Modloader/app/structs/DealDamageSphere__Class.h>
#endif
#undef IL2CPP_STRUCT_DealDamageSphere_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageSphere_DEFINED) && !defined(IL2CPP_STRUCT_DealDamageSphere_FWDDECL)
#include <Modloader/app/structs/DealDamageSphere.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DealDamageSphere.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
