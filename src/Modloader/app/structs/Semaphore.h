#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Semaphore_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Semaphore_INITIALIZING
#if !defined(IL2CPP_STRUCT_Semaphore_DEFINED)
#include <Modloader/app/structs/Semaphore__Fields.h>
#if defined(IL2CPP_STRUCT_Semaphore__Fields_DEFINED)
#define IL2CPP_STRUCT_Semaphore_DEFINED
struct Semaphore__Class;
struct Semaphore {
    struct Semaphore__Class* klass;
    MonitorData* monitor;
    struct Semaphore__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Semaphore_FWDDECL)
#define IL2CPP_STRUCT_Semaphore_FWDDECL
#include <Modloader/app/structs/Semaphore__Class.h>
#endif
#undef IL2CPP_STRUCT_Semaphore_INITIALIZING
#if !defined(IL2CPP_STRUCT_Semaphore_DEFINED) && !defined(IL2CPP_STRUCT_Semaphore_FWDDECL)
#include <Modloader/app/structs/Semaphore.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Semaphore.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
