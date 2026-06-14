#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicCameraTargetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicCameraTargetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicCameraTargetting_DEFINED)
#include <Modloader/app/structs/DynamicCameraTargetting__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicCameraTargetting__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicCameraTargetting_DEFINED
struct DynamicCameraTargetting__Class;
struct DynamicCameraTargetting {
    struct DynamicCameraTargetting__Class* klass;
    MonitorData* monitor;
    struct DynamicCameraTargetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicCameraTargetting_FWDDECL)
#define IL2CPP_STRUCT_DynamicCameraTargetting_FWDDECL
#include <Modloader/app/structs/DynamicCameraTargetting__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicCameraTargetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicCameraTargetting_DEFINED) && !defined(IL2CPP_STRUCT_DynamicCameraTargetting_FWDDECL)
#include <Modloader/app/structs/DynamicCameraTargetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicCameraTargetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
