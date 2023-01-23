#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicLightsManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicLightsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLightsManager_DEFINED)
#include <Modloader/app/structs/DynamicLightsManager__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicLightsManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicLightsManager_DEFINED
struct DynamicLightsManager__Class;
struct DynamicLightsManager {
    struct DynamicLightsManager__Class* klass;
    MonitorData* monitor;
    struct DynamicLightsManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicLightsManager_FWDDECL)
#define IL2CPP_STRUCT_DynamicLightsManager_FWDDECL
#include <Modloader/app/structs/DynamicLightsManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicLightsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLightsManager_DEFINED) && !defined(IL2CPP_STRUCT_DynamicLightsManager_FWDDECL)
#include <Modloader/app/structs/DynamicLightsManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicLightsManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
