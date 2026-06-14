#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIProfilingSetting_DEFINED)
#include <Modloader/app/structs/UIProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_UIProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_UIProfilingSetting_DEFINED
struct UIProfilingSetting__Class;
struct UIProfilingSetting {
    struct UIProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct UIProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_UIProfilingSetting_FWDDECL
#include <Modloader/app/structs/UIProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_UIProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_UIProfilingSetting_FWDDECL)
#include <Modloader/app/structs/UIProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
