#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntity_DEFINED)
#include <Modloader/app/structs/LizardEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LizardEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardEntity_DEFINED
struct LizardEntity__Class;
struct LizardEntity {
    struct LizardEntity__Class* klass;
    MonitorData* monitor;
    struct LizardEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardEntity_FWDDECL)
#define IL2CPP_STRUCT_LizardEntity_FWDDECL
#include <Modloader/app/structs/LizardEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_LizardEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntity_DEFINED) && !defined(IL2CPP_STRUCT_LizardEntity_FWDDECL)
#include <Modloader/app/structs/LizardEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
