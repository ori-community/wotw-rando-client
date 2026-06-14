#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequencePlatformB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequencePlatformB_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformB_DEFINED)
#include <Modloader/app/structs/SequencePlatformB__Fields.h>
#if defined(IL2CPP_STRUCT_SequencePlatformB__Fields_DEFINED)
#define IL2CPP_STRUCT_SequencePlatformB_DEFINED
struct SequencePlatformB__Class;
struct SequencePlatformB {
    struct SequencePlatformB__Class* klass;
    MonitorData* monitor;
    struct SequencePlatformB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequencePlatformB_FWDDECL)
#define IL2CPP_STRUCT_SequencePlatformB_FWDDECL
#include <Modloader/app/structs/SequencePlatformB__Class.h>
#endif
#undef IL2CPP_STRUCT_SequencePlatformB_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformB_DEFINED) && !defined(IL2CPP_STRUCT_SequencePlatformB_FWDDECL)
#include <Modloader/app/structs/SequencePlatformB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequencePlatformB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
