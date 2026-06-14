#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IModularZoneModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IModularZoneModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IModularZoneModifier_DEFINED)
#define IL2CPP_STRUCT_IModularZoneModifier_DEFINED
struct IModularZoneModifier__Class;
struct IModularZoneModifier {
    struct IModularZoneModifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IModularZoneModifier_FWDDECL)
#define IL2CPP_STRUCT_IModularZoneModifier_FWDDECL
#include <Modloader/app/structs/IModularZoneModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_IModularZoneModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IModularZoneModifier_DEFINED) && !defined(IL2CPP_STRUCT_IModularZoneModifier_FWDDECL)
#include <Modloader/app/structs/IModularZoneModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IModularZoneModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
