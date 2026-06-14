#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRunPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRunPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRunPuppet_DEFINED)
#include <Modloader/app/structs/SeinRunPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_SeinRunPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinRunPuppet_DEFINED
struct SeinRunPuppet__Class;
struct SeinRunPuppet {
    struct SeinRunPuppet__Class* klass;
    MonitorData* monitor;
    struct SeinRunPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRunPuppet_FWDDECL)
#define IL2CPP_STRUCT_SeinRunPuppet_FWDDECL
#include <Modloader/app/structs/SeinRunPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinRunPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRunPuppet_DEFINED) && !defined(IL2CPP_STRUCT_SeinRunPuppet_FWDDECL)
#include <Modloader/app/structs/SeinRunPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRunPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
