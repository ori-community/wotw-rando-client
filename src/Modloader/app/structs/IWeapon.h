#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWeapon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWeapon_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWeapon_DEFINED)
#define IL2CPP_STRUCT_IWeapon_DEFINED
struct IWeapon__Class;
struct IWeapon {
    struct IWeapon__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IWeapon_FWDDECL)
#define IL2CPP_STRUCT_IWeapon_FWDDECL
#include <Modloader/app/structs/IWeapon__Class.h>
#endif
#undef IL2CPP_STRUCT_IWeapon_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWeapon_DEFINED) && !defined(IL2CPP_STRUCT_IWeapon_FWDDECL)
#include <Modloader/app/structs/IWeapon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWeapon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
