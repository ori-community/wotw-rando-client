#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInteraction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInteraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInteraction_DEFINED)
#include <Modloader/app/structs/SeinInteraction__Fields.h>
#if defined(IL2CPP_STRUCT_SeinInteraction__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinInteraction_DEFINED
struct SeinInteraction__Class;
struct SeinInteraction {
    struct SeinInteraction__Class* klass;
    MonitorData* monitor;
    struct SeinInteraction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInteraction_FWDDECL)
#define IL2CPP_STRUCT_SeinInteraction_FWDDECL
#include <Modloader/app/structs/SeinInteraction__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinInteraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInteraction_DEFINED) && !defined(IL2CPP_STRUCT_SeinInteraction_FWDDECL)
#include <Modloader/app/structs/SeinInteraction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInteraction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
