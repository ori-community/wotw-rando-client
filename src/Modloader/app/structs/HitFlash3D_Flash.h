#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitFlash3D_Flash_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitFlash3D_Flash_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitFlash3D_Flash_DEFINED)
#include <Modloader/app/structs/HitFlash3D_Flash__Fields.h>
#if defined(IL2CPP_STRUCT_HitFlash3D_Flash__Fields_DEFINED)
#define IL2CPP_STRUCT_HitFlash3D_Flash_DEFINED
struct HitFlash3D_Flash__Class;
struct HitFlash3D_Flash {
    struct HitFlash3D_Flash__Class* klass;
    MonitorData* monitor;
    struct HitFlash3D_Flash__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitFlash3D_Flash_FWDDECL)
#define IL2CPP_STRUCT_HitFlash3D_Flash_FWDDECL
#include <Modloader/app/structs/HitFlash3D_Flash__Class.h>
#endif
#undef IL2CPP_STRUCT_HitFlash3D_Flash_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitFlash3D_Flash_DEFINED) && !defined(IL2CPP_STRUCT_HitFlash3D_Flash_FWDDECL)
#include <Modloader/app/structs/HitFlash3D_Flash.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitFlash3D_Flash.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
