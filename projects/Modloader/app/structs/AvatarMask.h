#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AvatarMask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AvatarMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_AvatarMask_DEFINED)
#include <Modloader/app/structs/AvatarMask__Fields.h>
#if defined(IL2CPP_STRUCT_AvatarMask__Fields_DEFINED)
#define IL2CPP_STRUCT_AvatarMask_DEFINED
struct AvatarMask__Class;
struct AvatarMask {
    struct AvatarMask__Class* klass;
    MonitorData* monitor;
    struct AvatarMask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AvatarMask_FWDDECL)
#define IL2CPP_STRUCT_AvatarMask_FWDDECL
#include <Modloader/app/structs/AvatarMask__Class.h>
#endif
#undef IL2CPP_STRUCT_AvatarMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_AvatarMask_DEFINED) && !defined(IL2CPP_STRUCT_AvatarMask_FWDDECL)
#include <Modloader/app/structs/AvatarMask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AvatarMask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
