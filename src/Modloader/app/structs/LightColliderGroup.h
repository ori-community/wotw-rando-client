#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightColliderGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightColliderGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightColliderGroup_DEFINED)
#include <Modloader/app/structs/LightColliderGroup__Fields.h>
#if defined(IL2CPP_STRUCT_LightColliderGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_LightColliderGroup_DEFINED
struct LightColliderGroup__Class;
struct LightColliderGroup {
    struct LightColliderGroup__Class* klass;
    MonitorData* monitor;
    struct LightColliderGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightColliderGroup_FWDDECL)
#define IL2CPP_STRUCT_LightColliderGroup_FWDDECL
#include <Modloader/app/structs/LightColliderGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_LightColliderGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightColliderGroup_DEFINED) && !defined(IL2CPP_STRUCT_LightColliderGroup_FWDDECL)
#include <Modloader/app/structs/LightColliderGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightColliderGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
