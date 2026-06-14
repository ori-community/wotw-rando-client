#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyPressurePlate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyPressurePlate_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPressurePlate_DEFINED)
#include <Modloader/app/structs/LegacyPressurePlate__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyPressurePlate__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyPressurePlate_DEFINED
struct LegacyPressurePlate__Class;
struct LegacyPressurePlate {
    struct LegacyPressurePlate__Class* klass;
    MonitorData* monitor;
    struct LegacyPressurePlate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyPressurePlate_FWDDECL)
#define IL2CPP_STRUCT_LegacyPressurePlate_FWDDECL
#include <Modloader/app/structs/LegacyPressurePlate__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyPressurePlate_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPressurePlate_DEFINED) && !defined(IL2CPP_STRUCT_LegacyPressurePlate_FWDDECL)
#include <Modloader/app/structs/LegacyPressurePlate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyPressurePlate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
