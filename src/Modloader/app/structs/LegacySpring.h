#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySpring_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySpring_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySpring_DEFINED)
#include <Modloader/app/structs/LegacySpring__Fields.h>
#if defined(IL2CPP_STRUCT_LegacySpring__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacySpring_DEFINED
struct LegacySpring__Class;
struct LegacySpring {
    struct LegacySpring__Class* klass;
    MonitorData* monitor;
    struct LegacySpring__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySpring_FWDDECL)
#define IL2CPP_STRUCT_LegacySpring_FWDDECL
#include <Modloader/app/structs/LegacySpring__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacySpring_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySpring_DEFINED) && !defined(IL2CPP_STRUCT_LegacySpring_FWDDECL)
#include <Modloader/app/structs/LegacySpring.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySpring.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
