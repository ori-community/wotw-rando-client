#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConstrainedEntityWithChildren_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConstrainedEntityWithChildren_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstrainedEntityWithChildren_DEFINED)
#define IL2CPP_STRUCT_IConstrainedEntityWithChildren_DEFINED
struct IConstrainedEntityWithChildren__Class;
struct IConstrainedEntityWithChildren {
    struct IConstrainedEntityWithChildren__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IConstrainedEntityWithChildren_FWDDECL)
#define IL2CPP_STRUCT_IConstrainedEntityWithChildren_FWDDECL
#include <Modloader/app/structs/IConstrainedEntityWithChildren__Class.h>
#endif
#undef IL2CPP_STRUCT_IConstrainedEntityWithChildren_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstrainedEntityWithChildren_DEFINED) && !defined(IL2CPP_STRUCT_IConstrainedEntityWithChildren_FWDDECL)
#include <Modloader/app/structs/IConstrainedEntityWithChildren.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConstrainedEntityWithChildren.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
