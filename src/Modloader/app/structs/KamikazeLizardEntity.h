#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KamikazeLizardEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KamikazeLizardEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeLizardEntity_DEFINED)
#include <Modloader/app/structs/KamikazeLizardEntity__Fields.h>
#if defined(IL2CPP_STRUCT_KamikazeLizardEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_KamikazeLizardEntity_DEFINED
struct KamikazeLizardEntity__Class;
struct KamikazeLizardEntity {
    struct KamikazeLizardEntity__Class* klass;
    MonitorData* monitor;
    struct KamikazeLizardEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KamikazeLizardEntity_FWDDECL)
#define IL2CPP_STRUCT_KamikazeLizardEntity_FWDDECL
#include <Modloader/app/structs/KamikazeLizardEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_KamikazeLizardEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeLizardEntity_DEFINED) && !defined(IL2CPP_STRUCT_KamikazeLizardEntity_FWDDECL)
#include <Modloader/app/structs/KamikazeLizardEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KamikazeLizardEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
