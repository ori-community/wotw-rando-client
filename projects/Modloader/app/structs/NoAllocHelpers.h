#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoAllocHelpers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoAllocHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoAllocHelpers_DEFINED)
#define IL2CPP_STRUCT_NoAllocHelpers_DEFINED
struct NoAllocHelpers__Class;
struct NoAllocHelpers {
    struct NoAllocHelpers__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NoAllocHelpers_FWDDECL)
#define IL2CPP_STRUCT_NoAllocHelpers_FWDDECL
#include <Modloader/app/structs/NoAllocHelpers__Class.h>
#endif
#undef IL2CPP_STRUCT_NoAllocHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoAllocHelpers_DEFINED) && !defined(IL2CPP_STRUCT_NoAllocHelpers_FWDDECL)
#include <Modloader/app/structs/NoAllocHelpers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoAllocHelpers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
