#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurrentCameraTransformProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurrentCameraTransformProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentCameraTransformProvider_DEFINED)
#include <Modloader/app/structs/CurrentCameraTransformProvider__Fields.h>
#if defined(IL2CPP_STRUCT_CurrentCameraTransformProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CurrentCameraTransformProvider_DEFINED
struct CurrentCameraTransformProvider__Class;
struct CurrentCameraTransformProvider {
    struct CurrentCameraTransformProvider__Class* klass;
    MonitorData* monitor;
    struct CurrentCameraTransformProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurrentCameraTransformProvider_FWDDECL)
#define IL2CPP_STRUCT_CurrentCameraTransformProvider_FWDDECL
#include <Modloader/app/structs/CurrentCameraTransformProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CurrentCameraTransformProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentCameraTransformProvider_DEFINED) && !defined(IL2CPP_STRUCT_CurrentCameraTransformProvider_FWDDECL)
#include <Modloader/app/structs/CurrentCameraTransformProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurrentCameraTransformProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
