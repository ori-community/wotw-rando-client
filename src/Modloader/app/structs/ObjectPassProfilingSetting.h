#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectPassProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectPassProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectPassProfilingSetting_DEFINED)
#include <Modloader/app/structs/ObjectPassProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectPassProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectPassProfilingSetting_DEFINED
struct ObjectPassProfilingSetting__Class;
struct ObjectPassProfilingSetting {
    struct ObjectPassProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct ObjectPassProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectPassProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_ObjectPassProfilingSetting_FWDDECL
#include <Modloader/app/structs/ObjectPassProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectPassProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectPassProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_ObjectPassProfilingSetting_FWDDECL)
#include <Modloader/app/structs/ObjectPassProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectPassProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
