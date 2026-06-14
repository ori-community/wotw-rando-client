#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirtyUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirtyUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirtyUtility_DEFINED)
#define IL2CPP_STRUCT_DirtyUtility_DEFINED
struct DirtyUtility__Class;
struct DirtyUtility {
    struct DirtyUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DirtyUtility_FWDDECL)
#define IL2CPP_STRUCT_DirtyUtility_FWDDECL
#include <Modloader/app/structs/DirtyUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_DirtyUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirtyUtility_DEFINED) && !defined(IL2CPP_STRUCT_DirtyUtility_FWDDECL)
#include <Modloader/app/structs/DirtyUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirtyUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
