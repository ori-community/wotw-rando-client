#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRelatedReflectable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRelatedReflectable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRelatedReflectable_DEFINED)
#define IL2CPP_STRUCT_IRelatedReflectable_DEFINED
struct IRelatedReflectable__Class;
struct IRelatedReflectable {
    struct IRelatedReflectable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRelatedReflectable_FWDDECL)
#define IL2CPP_STRUCT_IRelatedReflectable_FWDDECL
#include <Modloader/app/structs/IRelatedReflectable__Class.h>
#endif
#undef IL2CPP_STRUCT_IRelatedReflectable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRelatedReflectable_DEFINED) && !defined(IL2CPP_STRUCT_IRelatedReflectable_FWDDECL)
#include <Modloader/app/structs/IRelatedReflectable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRelatedReflectable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
