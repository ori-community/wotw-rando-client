#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SemaphoreFullException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SemaphoreFullException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreFullException_DEFINED)
#include <Modloader/app/structs/SemaphoreFullException__Fields.h>
#if defined(IL2CPP_STRUCT_SemaphoreFullException__Fields_DEFINED)
#define IL2CPP_STRUCT_SemaphoreFullException_DEFINED
struct SemaphoreFullException__Class;
struct SemaphoreFullException {
    struct SemaphoreFullException__Class* klass;
    MonitorData* monitor;
    struct SemaphoreFullException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SemaphoreFullException_FWDDECL)
#define IL2CPP_STRUCT_SemaphoreFullException_FWDDECL
#include <Modloader/app/structs/SemaphoreFullException__Class.h>
#endif
#undef IL2CPP_STRUCT_SemaphoreFullException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreFullException_DEFINED) && !defined(IL2CPP_STRUCT_SemaphoreFullException_FWDDECL)
#include <Modloader/app/structs/SemaphoreFullException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SemaphoreFullException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
