#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedUpdateScheduler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedUpdateScheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_DEFINED)
#include <Modloader/app/structs/FixedUpdateScheduler__Fields.h>
#if defined(IL2CPP_STRUCT_FixedUpdateScheduler__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedUpdateScheduler_DEFINED
struct FixedUpdateScheduler__Class;
struct FixedUpdateScheduler {
    struct FixedUpdateScheduler__Class* klass;
    MonitorData* monitor;
    struct FixedUpdateScheduler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_FWDDECL)
#define IL2CPP_STRUCT_FixedUpdateScheduler_FWDDECL
#include <Modloader/app/structs/FixedUpdateScheduler__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedUpdateScheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_DEFINED) && !defined(IL2CPP_STRUCT_FixedUpdateScheduler_FWDDECL)
#include <Modloader/app/structs/FixedUpdateScheduler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedUpdateScheduler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
