#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbandonedMutexException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbandonedMutexException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbandonedMutexException_DEFINED)
#include <Modloader/app/structs/AbandonedMutexException__Fields.h>
#if defined(IL2CPP_STRUCT_AbandonedMutexException__Fields_DEFINED)
#define IL2CPP_STRUCT_AbandonedMutexException_DEFINED
struct AbandonedMutexException__Class;
struct AbandonedMutexException {
    struct AbandonedMutexException__Class* klass;
    MonitorData* monitor;
    struct AbandonedMutexException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbandonedMutexException_FWDDECL)
#define IL2CPP_STRUCT_AbandonedMutexException_FWDDECL
#include <Modloader/app/structs/AbandonedMutexException__Class.h>
#endif
#undef IL2CPP_STRUCT_AbandonedMutexException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbandonedMutexException_DEFINED) && !defined(IL2CPP_STRUCT_AbandonedMutexException_FWDDECL)
#include <Modloader/app/structs/AbandonedMutexException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbandonedMutexException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
