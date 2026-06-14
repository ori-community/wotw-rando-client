#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformPuppet_DEFINED)
#include <Modloader/app/structs/PlatformPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformPuppet_DEFINED
struct PlatformPuppet__Class;
struct PlatformPuppet {
    struct PlatformPuppet__Class* klass;
    MonitorData* monitor;
    struct PlatformPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformPuppet_FWDDECL)
#define IL2CPP_STRUCT_PlatformPuppet_FWDDECL
#include <Modloader/app/structs/PlatformPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformPuppet_DEFINED) && !defined(IL2CPP_STRUCT_PlatformPuppet_FWDDECL)
#include <Modloader/app/structs/PlatformPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
