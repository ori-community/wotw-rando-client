#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPrefabSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPrefabSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPrefabSetting_DEFINED)
#include <Modloader/app/structs/UberPoolPrefabSetting__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolPrefabSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPrefabSetting_DEFINED
struct UberPoolPrefabSetting__Class;
struct UberPoolPrefabSetting {
    struct UberPoolPrefabSetting__Class* klass;
    MonitorData* monitor;
    struct UberPoolPrefabSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPrefabSetting_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPrefabSetting_FWDDECL
#include <Modloader/app/structs/UberPoolPrefabSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPrefabSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPrefabSetting_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPrefabSetting_FWDDECL)
#include <Modloader/app/structs/UberPoolPrefabSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPrefabSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
