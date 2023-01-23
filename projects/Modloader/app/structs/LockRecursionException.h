#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockRecursionException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockRecursionException_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockRecursionException_DEFINED)
#include <Modloader/app/structs/LockRecursionException__Fields.h>
#if defined(IL2CPP_STRUCT_LockRecursionException__Fields_DEFINED)
#define IL2CPP_STRUCT_LockRecursionException_DEFINED
struct LockRecursionException__Class;
struct LockRecursionException {
    struct LockRecursionException__Class* klass;
    MonitorData* monitor;
    struct LockRecursionException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockRecursionException_FWDDECL)
#define IL2CPP_STRUCT_LockRecursionException_FWDDECL
#include <Modloader/app/structs/LockRecursionException__Class.h>
#endif
#undef IL2CPP_STRUCT_LockRecursionException_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockRecursionException_DEFINED) && !defined(IL2CPP_STRUCT_LockRecursionException_FWDDECL)
#include <Modloader/app/structs/LockRecursionException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockRecursionException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
