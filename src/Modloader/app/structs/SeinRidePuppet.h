#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRidePuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRidePuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRidePuppet_DEFINED)
#include <Modloader/app/structs/SeinRidePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_SeinRidePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinRidePuppet_DEFINED
struct SeinRidePuppet__Class;
struct SeinRidePuppet {
    struct SeinRidePuppet__Class* klass;
    MonitorData* monitor;
    struct SeinRidePuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRidePuppet_FWDDECL)
#define IL2CPP_STRUCT_SeinRidePuppet_FWDDECL
#include <Modloader/app/structs/SeinRidePuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinRidePuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRidePuppet_DEFINED) && !defined(IL2CPP_STRUCT_SeinRidePuppet_FWDDECL)
#include <Modloader/app/structs/SeinRidePuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRidePuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
