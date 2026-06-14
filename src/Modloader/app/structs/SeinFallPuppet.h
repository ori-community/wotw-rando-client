#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFallPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFallPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFallPuppet_DEFINED)
#include <Modloader/app/structs/SeinFallPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_SeinFallPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinFallPuppet_DEFINED
struct SeinFallPuppet__Class;
struct SeinFallPuppet {
    struct SeinFallPuppet__Class* klass;
    MonitorData* monitor;
    struct SeinFallPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFallPuppet_FWDDECL)
#define IL2CPP_STRUCT_SeinFallPuppet_FWDDECL
#include <Modloader/app/structs/SeinFallPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinFallPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFallPuppet_DEFINED) && !defined(IL2CPP_STRUCT_SeinFallPuppet_FWDDECL)
#include <Modloader/app/structs/SeinFallPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFallPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
