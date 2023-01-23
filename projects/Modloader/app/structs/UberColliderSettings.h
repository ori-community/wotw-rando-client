#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberColliderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberColliderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberColliderSettings_DEFINED)
#include <Modloader/app/structs/UberColliderSettings__Fields.h>
#if defined(IL2CPP_STRUCT_UberColliderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_UberColliderSettings_DEFINED
struct UberColliderSettings__Class;
struct UberColliderSettings {
    struct UberColliderSettings__Class* klass;
    MonitorData* monitor;
    struct UberColliderSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberColliderSettings_FWDDECL)
#define IL2CPP_STRUCT_UberColliderSettings_FWDDECL
#include <Modloader/app/structs/UberColliderSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_UberColliderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberColliderSettings_DEFINED) && !defined(IL2CPP_STRUCT_UberColliderSettings_FWDDECL)
#include <Modloader/app/structs/UberColliderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberColliderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
