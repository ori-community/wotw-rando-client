#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinIdlePuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinIdlePuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinIdlePuppet_DEFINED)
#include <Modloader/app/structs/SeinIdlePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_SeinIdlePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinIdlePuppet_DEFINED
struct SeinIdlePuppet__Class;
struct SeinIdlePuppet {
    struct SeinIdlePuppet__Class* klass;
    MonitorData* monitor;
    struct SeinIdlePuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinIdlePuppet_FWDDECL)
#define IL2CPP_STRUCT_SeinIdlePuppet_FWDDECL
#include <Modloader/app/structs/SeinIdlePuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinIdlePuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinIdlePuppet_DEFINED) && !defined(IL2CPP_STRUCT_SeinIdlePuppet_FWDDECL)
#include <Modloader/app/structs/SeinIdlePuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinIdlePuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
